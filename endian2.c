#include<stdio.h>
void s(char *b,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%.2x",b[i]);
    }
}
int main(){

    int i=0x12345678;
    s((char *)&i,sizeof(i));
}
