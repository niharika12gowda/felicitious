#include<stdio.h>
int main()
{
    int a=10;
    int *ptr1,**ptr2,***ptr3,****ptr4;
    ptr1=&a;
    ptr2=&ptr1;
    ptr3=&ptr2;
    ptr4=&ptr3;
    printf("%d\n",*ptr1);
    printf("%d\n",*ptr2);
    //printf("%d\n",***ptr3);
    //printf("%d\n",****ptr4);
}
