#include<stdio.h>
int main(){
int b[3],a[3];
    for(int i=0; i<=2; i++){
    scanf("\n%d",&a[i]);
    }
    for(int i=0; i<=2;i++){
        if(a[i]==2&&a[i+1]==3)
        {
            a[i+1]=0;
        }
        printf("%d\n",a[i]);
    }
}
