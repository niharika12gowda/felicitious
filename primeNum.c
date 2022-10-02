//return true if entered number is prime number
#include<stdio.h>
int prime(int);
int a;

int prime(int a){
    int temp=0;
    if(a==0||a==1){
        temp=1;

    }
for(int i=2; i<=a/2;++i){
    if(a%i==0 ){
        temp=1;
        break;
    }
    if(temp==0){
        return 1;
    }else{
    return 0;
    }

}
}

int main(){
printf("enter the number:\n");
scanf("%d",&a);
printf("%d",prime(a));
}

int prime1(int a){

}
