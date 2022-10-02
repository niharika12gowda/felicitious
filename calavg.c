#include<stdio.h>
int main()
{
    int avg,n,sum=0, i;
    printf("enter the size of an array n:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the values for an array:\n");
    for(i=0; i<n; i++)
    {
        scanf("\n%d",&arr[i]);
    }
    int count=0;
    for(i=0;i<n; i++){
        sum=sum+arr[i];
        count++;
    }
avg=sum/count;
printf("%d",avg);
}

