#include<stdio.h>

int fun(int*, int*);
int main(){
int x=20,y=10;
fun(&x,&y)
}

int fun(int* , int*){
*x=30;
*y=10;
printf("%d %d",x,y);
}
