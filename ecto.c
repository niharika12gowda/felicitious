#include<stdio.h>
int main(){
for(int i=0;i<6;i++){
    printf("sum is %d\n\n",jane());
    //tech();
}
}

int jane(){
int a, b;
printf("enter two values;\n");
scanf("%d %d",&a,&b);
 return a+b;
 }

 tech(){
 int c;
 printf("enter case:\n");
 scanf("%d",&c);

 switch(c){
 case 1:printf("this is something you dnt know\n");
 break;

 case 2:printf("this is something you dnt know\n");
 break;

 case 3:printf("this is something you dnt know");
 break;

 default:printf("this is what");
 }
 }
