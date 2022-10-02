#include<stdio.h>
#define PI 3.14
int r;

float AreaOfcircum(r){
    int C;
    C=2*PI*r;
    printf("Area of circumf is :%d\n",C);
    //return C;
 }

 int AreaCir(r){
    int A;
    A=PI*r*r;
    printf("Area of Circle is:%d\n",A);
    //return A;
 }

void main()
{
    printf("Enter the value radius of the circle:");
    scanf("%d
          ",&r);
    AreaOfcircum(r);
    AreaCir(r);

}

