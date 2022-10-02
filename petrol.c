#include<stdio.h>
#define Cost_Ptr 102
int days,total_km,mileage,ud,total_ltrs,cost_of_petrol;

int main()
{
    //int Cost_Ptr=102;
    printf("Enter the Mileage of your bike:\n");
    scanf("%d",&mileage);
    printf("Enter the Up and Down Km of your bike:\n");
    scanf("%d",&ud);
    printf("Enter the days to calculate how many kilometer your bike runs:\n");
    scanf("%d",&days);
    petrol();
}

int petrol()
    {
        //int Cost_Ptr=102;
      //  int days,total_km,mileage,ud,total_ltrs,cost_of_petrol;
        total_km=ud*days;
        total_ltrs=total_km/mileage;
        cost_of_petrol=total_ltrs*Cost_Ptr;

        printf("The total kilometer is:%d\n",total_km);
        printf("The total Liter of petrol is:%d\n",total_ltrs);
        printf("The cost of petrol is:%d\n",cost_of_petrol);
    }
