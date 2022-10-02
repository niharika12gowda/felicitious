#include<stdio.h>
void main()
{
    int p,r,t;
    printf("enter the values for that:");
    scanf("%d%d%d",&p,&t,&r);
    SIP(p,t,r);
}

//float p,t,r;
int SIP(int p,int t,int r){
    int SI;
    SI=(p*t*r)/100;
    printf("Results: %d",SI);
    return 0;
}

