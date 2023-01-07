#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    // a+=b;
    // printf("After addition value of a is:%d",a);
    // a-=b;
    // printf("After substraction value of a is:%d",a);
    // a*=b;
    // printf("After multipliction vlaue of a is:%d",a);
    a/=b;
    printf("After division value of a is:%d",a);
}