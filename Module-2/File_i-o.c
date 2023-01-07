#include<stdio.h>
int main()
{   
    FILE *fptr;
    char str[20],str1[20];
    char get[10];
    printf("Enter the any string:");
    scanf("%s",&str);
    fptr = fopen("D:/nidhi batch/16sep_se/module-2/hello.txt","w");
    fprintf(fptr,"%s",str);
    fclose(fptr);
    fptr = fopen("D:/nidhi batch/16sep_se/module-2/hello.txt","r");
    fscanf(fptr,"%s",&get);
    printf("%s",get);
    fclose(fptr);
    return 0;
}