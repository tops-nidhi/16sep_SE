#include<stdio.h>
void main()
{
    int a,b;
    float div;
    printf("Enter 2 no:");
    scanf("%d%d",&a,&b);
    printf("\nAddiotn is:%d",a+b);
    printf("\nSubstraction is:%d\n",a-b);
    printf("Multiplication is:%d\n",a*b);
    div = a / b;
    printf("\nDivision is:%f",div);
    printf("\nModulo is:%d",a%b);
    a++;
    printf("\nIncrement is:%d",a);
    --b;
    printf("\nDecrement is:%d",b);
}