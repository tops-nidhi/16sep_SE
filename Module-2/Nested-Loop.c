#include<stdio.h>
void main()
{
    int i,j,k,no=5;
    for ( i = 1; i <= 5; i++) //row
    {
        for ( k = 0; k < no; k++)
        {
            printf(" ");
        }
        no--;
        for ( j = 1; j <= i; j++) //column
        {
            printf("%d ",j);
        }
        printf("\n", i);
    }
}