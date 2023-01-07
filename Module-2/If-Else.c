#include<stdio.h>
int main()
{
    int a;
    printf("enter your age");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("person is eligble for vote");
    }
    else
    {
        printf("person is not eligble for vote");    
    }
}