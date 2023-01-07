#include<stdio.h>
void main()
{
    int expression;
    float a,b;
    printf("Enter 2 no:");
    scanf("%f%f",&a,&b);
    printf("\n1.Addtion\n2.Substraction\n3.Multplication\n4.Division\n");
    printf("\nEnter your choice:");
    scanf("%d",&expression);
    switch (expression)
    {
    case 1:
        printf("\nAddtion is:%f",a+b);
        break;

    case 2:
        printf("\nSubstraction is:%f",a-b);
        break;
    case 3:
        printf("\nMultplication is:%f",a*b);
        break;
    case 4:
        printf("\nDivision is:%f",a/b);
        break;

    default:
        printf("\nEnter valid choice...........");
        break;
    }
}