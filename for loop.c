#include<stdio.h>

int main(){
char i,b;
scanf("%c",&b);
for(i='a'+1; i>=b; ++i){
    printf("\t%c\n",i);
}
}
