#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};

void main()
{
    struct node* head=NULL;
    struct node* a;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;
    for(int i=0;a->link=='\0';i++)
    {
        a->data=20;
        a->link=a+i;
    }
}
