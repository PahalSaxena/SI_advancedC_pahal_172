#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

void insert()
{
    struct node *n=malloc(sizeof(struct node));
    scanf("%d",&n->data);
    n->next=head;
    head=n;
}

void reverse()
{
    struct node *p=NULL,*c=head,*n;
    while(c)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;
}

void display()
{
    struct node *t=head;
    while(t)
    {
        printf("%d ",t->data);
        t=t->next;
    }
}

int main()
{
    int ch;
    while(1)
    {
        scanf("%d",&ch);
        if(ch==1) insert();
        else if(ch==2) display();
        else if(ch==3) reverse();
        else break;
    }
}