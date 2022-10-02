#include<stdio.h>
int main()
{
/*
    int *arr[5],a=10,b=20,c=30;
    arr[0]=&a;
    arr[1]=&b;
    arr[2]=&c;
    printf("%d\n",*arr[0]);
    printf("%d\n",*arr[1]);
    printf("%d\n",*arr[2]);
    //printf("%d\n",*arr[3]);
    for(int i=0; i<5; i++)
    {
        printf("%d\n",arr[i]);
    }
    //
    int arr[5];
    int *arr1[5];
    int i,j;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<5;j++)
    {
         arr1[5]=&arr[j];
    }

    printf("%d\n",*arr1[j]);
*/

/*

int arr[5];
    int *arr1[5];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
         arr1[i]=&arr[i];
    printf("%d\n",*arr1[i]);
    }
    */

//string pointers
char *s[5]={"hey","man","whats","up","there"};

for(int i=0;i<5;i++){
    printf("%s\t",s[i]);
}
}
