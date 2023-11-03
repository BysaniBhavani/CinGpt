//program to perform mathematical operations using swicth
#include<stdio.h>
//function declaration for operations
void operations(int a,int b,int c);
int main()
{
    int x,y,z; //variables for operations and decision
    printf("enter 1st number : \n");
    scanf("%d",&x);
    printf("enter 2nd number : \n");
    scanf("%d",&y);
    printf("enter \n\t 1 - Addition \n\t 2 - Subtraction \n\t 3 - Multiplication \n\t 4 - Division \n\t 5 - Modulous\n");
    scanf("%d",&z);
    operations(x,y,z);
    return 0;
}
//Funtion defivition for operations
void operations(int a,int b,int c)
{
    switch (c) //switch case for the operations
    {
    case 1:
        printf("Adddition of %d and %d is %d",a,b,a+b);
        break;
    case 2:
        printf("Subtraction of %d and %d is %d",a,b,a-b);
        break;
    case 3:
        printf("Multiplication of %d and %d is %d",a,b,a*b);
        break;
    case 4:
        printf("Division of %d and %d is %d",a,b,a/b);
        break;
    case 5:
        printf("Modulous of %d and %d is %d",a,b,a%b);
        break;

    default:
        printf("enter correct option");
        break;
    }
}