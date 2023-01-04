#include<stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char name[10];
};
int main()
{
    int i,n;
    printf("Enter the number of record:");
    scanf("%d",&n);
    struct student st[n];
    printf("Enter Records of %d students",n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter Rollno:");
        scanf("%d",&st[i].rollno);
        printf("\nEnter Name:");
        scanf("%s",&st[i].name);
    }
    printf("\nStudent Information List:");
    for(i=0; i<n; i++)
    {
        printf("\nRollno:%d, Name:%s",st[i].rollno,st[i].name);
    }
    return 0;
}
