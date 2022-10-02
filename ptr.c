#include<stdio.h>
int main()
{/*
    char bb='g';
    char *ptr1=&bb;

    int * ptr, a=10;
    ptr1=&bb;
    ptr=&a;
    printf("%d\n",ptr );
    printf("%d\n",ptr1 );
printf("%d\n",*ptr );
    printf("%c\n",*ptr1 );
    printf("%d\n",*ptr1 );
*/

int a,*ptr1;
float b,*ptr2;
char c,*ptr3;

printf("enter the values:\n");
scanf("\n%d%f\n%c",&a,&b,&c);
ptr1=&a;
ptr2=&b;
ptr3=&c;

printf("\nvalue of: %d\n",*ptr1);
printf("address of: %d\n\n",ptr1);
printf("value of: %.2f\n",*ptr2);
printf("address of: %d\n\n",ptr2);
printf("value of: %c\n",*ptr3);
printf("address of: %d\n",ptr3);


}
