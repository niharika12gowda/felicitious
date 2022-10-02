
#include<stdio.h>

int main()
{
//    int i,j;
//    int a[2][3]={{2,1,3}, {2,3,1};
//    for(int i=0;i<=1;i++){
//    scanf("%d",&a[i]);
//        for(int j=0;j<=2;j++){
//            scanf("%d",&a[j]);
//    printf("%d\t",a[i][j]);
//        }
//        for(i=0;i<=1;i++){
//            for()
//        }
//    }
int i,j, arr[10][10];
printf("enter the values for arr:\n");
for (i=0;i<=9;i++){
    for(j=0;j<=9;j++){
            arr[i][j]=0;
 }
}
for(i=0;i<10;i++){
 scanf("%d",&arr[i][9]);
}
for (i=0;i<10;i++){
    for(j=0;j<10;j++){
        printf(" \t%d",arr[i][j]);
    }
    printf("\n");
}
}
