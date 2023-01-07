#include<stdio.h>
#include<string.h>
void main()
{
    int cmp;
    char str1[20],str2[20];
    printf("Enter 2 string:");
    scanf("%s%s",&str1,&str2);
    cmp = strcmp(str1,str2);
    // printf("\nYour max string is:%d",cmp);
    if(cmp>0)
    {
        printf("\n%s string is max.",str1);
    }
    else if (cmp == 0)
    {
        printf("\n Both are equal.");
    }
    
    else{
        printf("\n%s is max string.",str2);
    }
}