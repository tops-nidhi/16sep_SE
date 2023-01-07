#include<stdio.h>
void main()
{
    int a=100;
    int *ptr;
    ptr = &a;
    printf("Address of the other variable is:%d",ptr);
    // ++ptr;
    printf("\nAddress of the other variable is:%d",*ptr);
    *ptr=13;
    ++*ptr;
    printf("\nValue of a is:%d",a);
}