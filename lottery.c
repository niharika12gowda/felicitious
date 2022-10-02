#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the numbers a,b,c:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==2 && b==2 && c==2){
        printf("Result is:10");
    }else if(a==b&&a==c&&b==c){
        printf("Result is:5");
    }else if(b==c&&b!=a){
        printf("Result is:1");
    }
else{
    printf("0");
}
}

