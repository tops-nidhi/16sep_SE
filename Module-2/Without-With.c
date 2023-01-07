// Call by value
#include<stdio.h>
void data(int id)
{
    printf("The value of id is:%d",id);
}
int main()
{

    int id = 100;
    printf("Enter the value of id:");
    scanf("%d",&id);
    data(id);
    return 0;
}