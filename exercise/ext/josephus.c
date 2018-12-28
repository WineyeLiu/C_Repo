/* josephus.c 约瑟夫问题 2018-12-28 20:41:12 */
#include <stdio.h>
#include <stdlib.h>
#define NODES 41
#define EVES 3
#define REMAINS 2
struct node {
    char name[64];
    struct node * next;
};

struct node * kick_out_one(struct node *, int);
struct node * init_nodes(int);
void print_loop_link(struct node *);

int main(void) 
{
    int count = NODES;
    struct node * head = init_nodes(NODES);
    //print_loop_link(head);
    while (count > 2) {
        head = kick_out_one(head, EVES);
        count --;
    }
    print_loop_link(head);
    return 0;

}
struct node * kick_out_one(struct node * nodeptr, int n)
{
    struct node * node_pt = nodeptr;
    struct node * pre;
    struct node * kicked;
    struct node * post;
    int i;
    for (i = 0; i < n - 2; i++) 
    {
        node_pt = node_pt->next;
    }
    pre = node_pt;
    kicked = pre->next;
    post = kicked->next;
    pre->next = post;
    printf("%p, who is %s, was kicked!\n", kicked, kicked->name);
    return post;
}

/**
 * 构建一个大小为n的环形聊表
 * 返回head node的指针 
 */
struct node * init_nodes(int n)
{
    int i; 
    char num[10];
    struct node * head = (struct node *)malloc(sizeof(struct node));  //保存头部node的地址
    struct node * next; // 保存下一个node的指针
    struct node * tail = head;

    sprintf(head->name, "%d", n);    

    for (i = 1; i < n; i++)
    {
        next = head; // 先把head的值赋给next
        head = (struct node *)malloc(sizeof(struct node));
        sprintf(head->name, "%d", n-i); // 设置新head的值
        head->next = next; // 将head链接到链表
    }

    tail->next = head; // 最后把尾巴链到头部，形成一个环形链表
    return head;
}

void print_loop_link(struct node * p) 
{
    struct node * init_pt = p;
    printf("%p, who's name is %5s, who's next is %p\n", p, p->name, p->next);
    while ((p = p->next) != init_pt) {
        printf("%p, who's name is %5s, who's next is %p\n", p, p->name, p->next);
    }
    
}


