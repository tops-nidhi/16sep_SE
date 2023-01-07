#include<stdio.h>
void main()
{
    int no;
    printf("Enter no:");
    scanf("%d",&no);
    if ( no > 0 )
    {
        printf("\nNo is positive.");
    }
    else if ( no == 0 )
    {
        printf("\nNo is zero.");
    }
    
    else
    {
        printf("\nNo is negative.");
    }
}