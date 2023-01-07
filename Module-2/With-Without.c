#include<stdio.h>
int id;
int getdata()
{
    printf("Enter the value of id:");
    scanf("%d",&id);
    return 0;
};
int showdata()
{
    return id;
}
int main()
{
    getdata();
    printf("Vlaue of id is:%d",showdata());
}