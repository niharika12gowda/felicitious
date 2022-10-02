#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    got(a,n);
}
int got(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=j+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                printf("%d  ",a[i]);
            }
        }
    }

}
