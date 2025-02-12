#include<stdio.h>
struct employee
{
    int empNo;
    char name[20];
    float salary;
};
int main()
{
    struct employee e[3];
    int i;
   for(i=0;i<3;i++)
   {
        printf("\nenter employee %d details ",i+1);
        scanf("%d %s %f",&e[i].empNo,&e[i].name,&e[i].salary);
   }
    printf("employee details are :");
    printf("\n\n number\t\t name\t\t\t\tsalary");
    for(i=0;i<3;i++)
    {
        printf("\n %d \t \t %s \t \t \t  %f",e[i].empNo,e[i].name,e[i].salary);
    }
    return 0;
}