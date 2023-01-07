#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 no:");
    scanf("%d%d%d",&a,&b,&c);
    if (a > b)
    {
        if (a > c)
            printf("\n%d is max.",a);
        else
            printf("\n%d is max(a).",c);
    }
    else
    {
        if (b > c)
            printf("\n%d is max.",b);
        else
            printf("\n%d is max(b).",c);
    }
}