#include<stdio.h>
int main()
{
    int a;
    printf("enter number for a:\n");
    scanf("%d",&a);
    //mod(a);
    mod1(a);
}
int mod(int a)
{
        if((a&1)==0){
            printf("even");
}else{
printf("odd");
}
}


int mod1(int a)
{
        if((a&1)==0){
            printf("even");
}else{
printf("odd");
}
}

