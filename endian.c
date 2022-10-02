#include<stdio.h>
int main()
{
    unsigned long int x=0x11223344;
    printf("0x%x\n",x);
     unsigned long int l-*=(x&0x000000FF)<<24;
     unsigned long int lm=(x&0x0000FF00)<<8;
     unsigned long int rm=(x&0x00FF0000)>>8;
     unsigned long int r=(x&0xFF000000)>>24;
    printf("0x%x\n",l);
    printf("0x%x\n",lm);
    printf("0x%x\n",rm);
    printf("0x%x\n",r);
    printf("0x%x\n",l|lm|rm|r);

}
