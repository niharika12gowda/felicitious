#include<stdio.h>
int main()
{
    int ar[6]={1,2,3,4,5,6};
    int a=10,b=10;
    int *ptr=&a;
    int *q=&a;
    int *n=&ar[0];
    int **si=&a;
/*
    printf("%d\n",*ptr);
    ptr=ptr+2;
    printf("%d",*ptr);
*/
printf("%d\n",n);
    printf("%d\n",*n);

    n++;
    printf("%d\n",n);
    printf("%d\n",*n);


    n--;
    printf("%d\n",n);
    printf("%d\n",*n);

    --n;
    printf("%d\n",n);
    printf("%d\n",*n);

    si=si+1;
    printf("%d\n",si);
    printf("%d\n",*si);
/*
    n=n+9;
    printf("%d\n",n);
    printf("%d\n",*n);


    n=n-10;
    printf("%d\n",n);
    printf("%d\n",*n);

    n=n-2;
    printf("%d\n",n);
    printf("%d\n",*n);

    n=n+1;
    printf("%d\n",n);
    printf("%d\n",*n);
    */
}
