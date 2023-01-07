#include <stdio.h>
struct Structure
{
    int id;
    char nm[20];
}/*obj*/;

int main()
{
    int i;
    struct Structure obj[5];
    // obj.id=101;
    for ( i = 0; i < 3; i++)
    {
        printf("\nEnter your id:");
        scanf("%d",&obj[i].id);
        printf("\nEnter your name:");
        scanf("%s",&obj[i].nm);
    }
    for ( i = 0; i < 3; i++)
    {
    printf("\nYour id is:%d",obj[i].id);
    printf("\nYour name is:%s",obj[i].nm);
        /* code */
    }
    
    
}