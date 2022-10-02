//factorial
#include<stdio.h>

int factorial(int);
int i;

int factorial(i){
if(i<=1){
return 1;
}
    return i*factorial(i-1);

}

int main(){
printf("%d",factorial(12));
}
