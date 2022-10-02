#include<stdio.h>
#include"f2.c"
int soi()
{
    extern int x;
    int b=100;
    printf("%d",x+b);
}
