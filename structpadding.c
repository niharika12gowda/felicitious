#include<stdio.h>

typedef struct chain{
char a;
int e;
}c;

int main(){
int e;
c *ptr=&e;
scanf("%d",ptr->e);
printf("%d",ptr->e);
}
