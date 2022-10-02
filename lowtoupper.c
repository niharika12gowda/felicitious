#include<stdio.h>

int main(){
char nim[20];
printf("enter the string\n");
scanf("%s",&nim);
int a=strlen(nim);
printf("%d string is ",a);
for(int i=0;i<'';i++)
{
if(nim[i]>='a' ||  nim[i]<='z'){
    printf("%s",strupr(nim[i]));
}
else if(nim[i]>='A' ||  nim[i]<='Z')
{
printf("%s",strlwr(nim[i]));
}else{printf("program is wrong");}
}

}

