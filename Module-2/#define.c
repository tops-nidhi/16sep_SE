#include<stdio.h>
#define pi 3.14
void main()
{
    float r,area;
    printf("Enter value of radious:");
    scanf("%f",&r);
    area = pi* r*r;
    printf("\nArea of circle is:%f",area);
}