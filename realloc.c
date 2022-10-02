
#include<stdio.h>
int main()
{
    int *ptr, *ptr1;
    int n,m;
    printf("enter the size: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);

    }
 for(int i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n enter realloc size :");
    scanf("%d",&m);
     ptr1=(int*)realloc(ptr,m);
       for(int i=n;i<m;i++)
    {
        scanf("%d",ptr+i);

    }
    for(int i=0;i<m;i++)
    {
        printf("%d ",*(ptr1+i));
    }
    free(ptr);
}
