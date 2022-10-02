#include<stdio.h>
int main()
{
    int a;
    printf("enter the cost of the Product:");
    scanf("%d",&a);
    printf("Welcome to Naveen Mall\n");
    switch(a)
    {
        case 500 ... 3499: printf("Your Total Bill is:%d",a);
        break;
        case 3500 ... 4999 :printf("CONGRAGULATIONS you won 500rs voucher\n Your Total Bill is:%d",a);
        break;
        case 5000 ... 7999: printf("CONGRAGULATIONS you won 500rs voucher + you can buy AirDrops worth 500rs\nYour Total Bill is:%d",a);
        break;
        case 8001 ... 50000: printf("CONGRAGULATIONS you won 2000rs voucher + you can buy Watch worth 1000rs\nYour Total Bill is:%d",a);
        break;
//        case 4: printf("naveen");
//        break;
//        case 5: printf("gautham");
//        break;
        default:printf("enter valid input");
        break;
    }


    printf("\nPLease Visit Again");
}
