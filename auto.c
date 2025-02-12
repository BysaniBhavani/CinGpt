#include<stdio.h>
#include<conio.h>
struct student
{
    int studentNo;
    char name[20];
    int smarks[20];
    float totalPercentage;
}s[3];

int main()
{
    int n;
    printf("enter number of subjects for the student");
    scanf("%d",&n);
    printf("Enter student details: ");
    printf("\nEnter name of the student : ");
    for(int i=0;i<20;i++){
        scanf("%c",&s[0].name[i]);
    }
    s[0].totalPercentage=0;
    for(int i=0; i<n ; i++){
        scanf("%d",s[0].smarks[i]);
        s[0].totalPercentage+=s[0].smarks[i];
    }
    printf("Student name : %d",s[0].name);
    for(int i=0; i<n ; i++){
        printf("\nSubject %d marks : %d",i,s[0].smarks[i]);
    }
    printf("Total marks of the student : %d",(int)s[0].totalPercentage);
    printf("Student marks percentage : %f",s[0].totalPercentage/n);
    return 0;
}