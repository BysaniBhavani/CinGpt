#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    printf("Enter Marks of student");
    scanf("%d",&marks);
    switch((marks-1)/10){
        case 9:
            printf("\t\tCongratulations\n\t\t  Grade A");
            break;
        case 8:
            printf("\t\tCongratulations\n\t\t  Grade B");
            break;
        case 7:
            printf("\t\tCongratulations\n\t\t  Grade C");
            break;
        case 6:
            printf("\t\tCongratulations\n\t\t  Grade D");
            break;
        default:
            if(marks>100) printf("Enter valid marks");
            else printf("\t\tFailed the Exam");
            break;
    }
    getch();
}