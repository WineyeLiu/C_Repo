# 项目管理工具--GNU make

##### 参考：GNU/Linux编程 -- 郑谦益

* make将编译和链接的不走按一定规则写入文本文件，文本文件通常命名为Makefile、makefile 或GNUmakefile

## 基于make工具的项目管理

### makefile的语法  

```makefile
目标1:依赖文件列表
    命令1

目标2：依赖文件列表
    命令2

```

### make工具的语法
```bash
make [选项] [目标] # 创建指定的目标 如果没有指定目标则创建第一个目标 make文件的文件名如果不为约定的Makefile、makefile 或GNUmakefile则需要-f指定
```

|选项|功能描述|
|---|-----|
| -C dir | 在读取规则文件之前，进入指定的目录dir |
| -f file | 指定file文件作为存放规则的文件 |
| -h | 显示所有的make选项 |
| -i | 忽略所有的命令执行错误 |
| -I dir | 当包含其它规则文件是，指定搜索目录 |
| -n | 只打印要执行的命令，但不执行 |
| -p | 显示make变量数据库和隐含规则 |
| -s | 在执行命令时不显示命令 |
| -W | 在处理规则文件前后显示工作目录 |

示例：  
```makefile 
# demoscript makefile
appexam:main.o app.o mod.o lib.o
    gcc -o appexam main.0 app.o mod.o lib.o

main.o:main.c app.h
    gcc -c main.c

app.o:app.c app.h
    gcc -c app.c

mod.o:mod.c
    gcc -c mod.c

lib.o:lib.c lib.h
    gcc -c lib.c

clean:
    rm -f *.o
```

## makefile中的变量 

### 1.自定义变量

语法：  
变量名 = 变量  #类似C的宏

引用方法：  
$(变量名)

### 2.环境变量

make在运行过程中将环境变量转化成同名同值的make变量

### 3.预定义变量

GNU预定义了一些变量  

| 预定义变量名 | 含义 | 默认值 |
| -------- | ---- | -------- |
| AR | 归档程序 | ar |
| AS | 汇编器 | as |
| CC | C语言编译器 | cc |
| CXX | C++编译器 | g++ |
| CPP | 带有标准输出的C语言预处理程序（C Preprocess Program）| $(CC) -E |
| RM | 删除文件的命令 | rm -r |

根据上面的变量规则 适当修改demoscript：  

```makefile 
# demoscript makefile
OBJS=main.o app.o mod.o lib.o # 自定义变量
appexam:$(OBJS)
    $(CC) -o appexam $(OBJS)

main.o:main.c app.h
    $(CC) -c main.c

app.o:app.c app.h
    $(CC) -c app.c

mod.o:mod.c
    $(CC) -c mod.c

lib.o:lib.c lib.h
    $(CC) -c lib.c

clean:
    rm -f *.o 
```

### 4.自动变量

自动变量由make预先定义，具有特定的含义，它的值与规则中的目标和依赖对象有关。

| 变量 | 功能描述 |
| --- | ---------|
| $^  | 所有依赖文件，以空格分开，以出现先后为序 |
| $<  | 第一个依赖文件的名称 |
| $?  | 所有的依赖文件，以空格分开，它们的修改日期比目标创建日期晚 |
| $*  | 不包含扩展名的目标文件名称 |
| $@  | 目标的完整名称 |

根据上面的变量规则 进一步修改demoscript：  

```makefile 
# demoscript makefile
OBJS=main.o app.o mod.o lib.o # 自定义变量
appexam:$(OBJS)
    $(CC) -o $@ $^

main.o:main.c app.h
    $(CC) -c -o $@ $<

app.o:app.c app.h
    $(CC) -c -o $@ $<

mod.o:mod.c
    $(CC) -c -o $@ $<

lib.o:lib.c lib.h
    $(CC) -c -o $@ $<

clean:
    rm -f *.o 
```

## Makefile文件中的潜规则

### 1.隐含规则

在不给出产生目标文件的命令时，由make自动添加。  

如：demo.o:demo.c 

自动添加：$(CC) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c $< -o $@

运用隐含规则，修改demoscript

```makefile 
# demoscript makefile
OBJS=main.o app.o mod.o lib.o # 自定义变量
appexam:$(OBJS)
    $(CC) -o $@ $^

main.o:main.c app.h
app.o:app.c app.h
mod.o:mod.c
lib.o:lib.c lib.h
clean:
    rm -f *.o 
```

### 2.后缀规则

后缀规则定义了将具有某个后缀的文件（例如.c文件）转换为具有另一后缀的文件（例如.o文件）的方法。每个后缀规则以两个成对出现的后缀名定义，例如将.c转换成.o文件的后缀规则可定义如下：  
.c.o:
$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<

运用后缀规则，修改demoscript

```makefile 
# demoscript makefile
.c.o:
    gcc -c $<
OBJS=main.o app.o mod.o lib.o # 自定义变量
appexam:$(OBJS)
    $(CC) -o $@ $^

clean:
    rm -f *.o 
```

### 3.模式规则

模式规则是对具体规则的进一步抽象，定义了一类具有相同行为特点的规则，例如使用%表示通配。下面的模式规则定义了任意一个X.c文件转换成X.o文件。

运用模式规则，修改demoscript

```makefile 
# demoscript makefile
%.o:%.c
    $(CC) -c $< -o $@
OBJS=main.o app.o mod.o lib.o # 自定义变量
appexam:$(OBJS)
    $(CC) -o $@ $^

main.o:main.c app.h
app.o:app.c app.h
mod.o:mod.c
lib.o:lib.c lib.h
clean:
    rm -f *.o 
```






