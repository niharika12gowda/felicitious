#include<stdio.h>
int a,b,c,ab,bc,ca;

/*
int loot(a,b,c)
{
    int ab,bc,ca;
    ab=a+b;
    bc=b+c;
    ca=c+a;
}

int condi(ab,bc,ca)
{
    if(ab==10||bc==10||ca==10){
        return 10;
    }
        else if(bc>ab||ca>ab){
            return 5;
        }
    else{
    return 0;
    }
}



int main()
{
    printf("enter the values for a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    loot(a,b,c);
    condi(ab,bc,ca);
}
*/


int main(){
int a,b,c,ab,bc,ac;

printf("enter the value of a,b,c:\n");
scanf("\n%d \n%d \n%d",&a,&b,&c);

ab=a+b;
bc=b+c;
ac=a+c;

printf("the sum of ab=%d, bc=%d, ac=%d\n",ab,bc,ac);

if(ab==10||bc==10||ac==10){
        return 10;
    }
        else if(bc>(ab+10)||ac>(ab+10)){
            return 5;
        }
    else{
    return 0;
    }
}
