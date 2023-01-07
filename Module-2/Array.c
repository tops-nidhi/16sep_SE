#include<stdio.h>
void main()
{
    int i;
    int count;
    printf("Enter the no of person:");
    scanf("%d",&count);
    int array[count];
    // printf("\nVlaue of 0th index is:%d",array[0]);
    // printf("\nVlaue of 1st index is:%d",array[1]);
    // printf("\nVlaue of 2nd index is:%d",array[2]);
    // printf("\nVlaue of 3rd index is:%d",array[3]);
    // printf("\nVlaue of 4th index is:%d",array[4]);

    for ( i = 0; i < count; i++)
    {
        printf("Enter value of[%d]:",i);
        scanf("%d",&array[i]);
    }
    for (i = 0; i < count; i++)
    {
        printf("\nValue of [%d] is:%d",i,array[i]);
    }
}