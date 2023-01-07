#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter 2 no:");
    scanf("%d%d",&a,&b);
    printf("\nBitwise and is:%d",a&b);
    printf("\nBitwise or is:%d",a|b);
    printf("\nBitwise XOR is:%d",a^b);
    printf("\nBitwise complimant is:%d",~a);
    printf("\nBitwise shift left is:%d",a<<);
    printf("\nBitwise shift right is:%d",b>>);
}