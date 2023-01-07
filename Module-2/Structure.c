#include <stdio.h>
struct Structure
{
    int id;
    char nm[20];
}/*obj*/;

int main()
{
    
    struct Structure obj[5];
    obj.id=101;
    printf("Enter your name:");
    scanf("%s",&obj.nm);
    printf("\nYour id is:%d",obj.id);
    printf("\nYour name is:%s",obj.nm);
}