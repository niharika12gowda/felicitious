#include<stdio.h>

int main(){
int c=1515120;
float b=1.5;
void *a;
a=&c;
printf("%d\n",*(int *)a);  //type casting
printf("%d\n",sizeof(*(int *)a));
printf("%d\n",*(short *)a);  //type casting
printf("%d\n",sizeof(*(short *)a));
a=&b;
printf("%f",*(float *)a);
}
