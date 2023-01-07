#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter 2 no:");
    scanf("%d%d",&a, &b);
    if(! (a>10 || b<10) )
    {
        printf("True.");
    }
    else
    {
        printf("False.");
    }
}