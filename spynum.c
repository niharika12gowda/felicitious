#include<stdio.h>

int spy(int);
int num,a,sum=0,multi=1;
spy(num);

if(sum==multi){
        printf("spy");
    }else{
   printf("not spy");
    }
}

spy(int num){
while(num>0){
    a=num%10;
    sum=sum+a;
    multi=multi*a;
    num=num/10;
    }
}







