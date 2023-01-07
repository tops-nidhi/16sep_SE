#include<stdio.h>
union Unioun
{
    int id;
    char nm[20];
};
int main()
{
    union Unioun un;
    printf("\nEnter your name:");
    scanf("%s",&un.nm);
    printf("Enter your id:");
    scanf("%d",&un.id);
    printf("\nYour id is:%d",un.id);
    printf("\nYour name is:%s",un.nm);
}