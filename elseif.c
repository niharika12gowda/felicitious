#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the numbers a,b,c:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a!=b&& b!=c&& c!=a){
        printf("0");
    }else if(a==b&&a==c&&b==c){
        printf("20");
    }
else{
    printf("10");
}
}

