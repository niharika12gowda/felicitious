#include<stdio.h>
#include "f1.c"
int disp()
{
    extern int x;
    x=x+10;
    printf("%d",x);
}
