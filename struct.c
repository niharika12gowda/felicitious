/*#include<stdio.h>
    struct hey{
    int a;
    char b;
    float c;
    }v1,v2,v3;
int main()
{
    struct hey v1={10,'a',10.123};
    printf("%d\n%c\n%0.1f",v1.a,v1.b,v1.c);
}
*/
/*
#include<stdio.h>
#include<string.h>
    struct student{
    int a;
    char b[20];
    float c;
    }jaguar,kia,tesla;
int main()
{
  struct student tesla={400,"Electric",90.9};
  struct student kia={300,"Deisle",23.1};
  struct student jaguar={900,"Petrol",30.6};
    printf("%d\n%d\n%d\n\n",jaguar.a,tesla.a,kia.a);
    printf("%s\n%s\n%s\n\n",jaguar.b,tesla.b,kia.b);
    printf("%0.1f\n%0.1f\n%0.1f\n",jaguar.c,tesla.c,kia.c);}

*/


#include<stdio.h>
#include<string.h>
  typedef  struct cars{
    int a;
    char b[20];
    float c;
    }std,jaguar,kia,tesla;
int main()
{
  kia a={400,"Electric",90.9};
  jaguar k={300,"Deisle",23.1};
  std j={900,"Petrol",30.6};
    printf("%d\n%d\n%d\n\n",j.a,a.a,k.a);
    //printf("%s\n%s\n%s\n\n",jaguar.b,tesla.b,kia.b);
    //printf("%0.1f\n%0.1f\n%0.1f\n",jaguar.c,tesla.c,kia.c);


}



