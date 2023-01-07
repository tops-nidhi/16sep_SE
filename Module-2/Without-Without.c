#include<stdio.h>
int id=101;
char nm[20];
void getdata()
{
    printf("Enter the student id:");
    scanf("%d",&id);
    printf("Enter the student name:");
    scanf("%s",&nm);
}
void putdata()
{
    printf("\nValue of student id is:%d and student name is:%s",id,nm);
}
int main()
{
    getdata();
    putdata();
    return 0;
}