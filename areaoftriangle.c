#include<stdio.h>
float AreaOfTri( float b, float h){
    float Area=0;
    Area=0.5*b*h;
  //printf("Results: %.2f",Area);
    return Area;
 }

void main()
{
    float b,h;
    printf("enter the values for that:");
    scanf("%f%f",&b,&h);

    printf("Results: %f",AreaOfTri(b,h));


}
