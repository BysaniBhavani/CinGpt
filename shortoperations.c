//program to perform mathematical operations using swicth
#include<stdio.h>
//function declaration for operations
void operations(short a,short b,short c);
int main()
{
    short x,y,z; //variables for operations and decision
    printf("enter 1st number : \n");
    scanf("%hd",&x);
    printf("enter 2nd number : \n");
    scanf("%hd",&y);
    printf("enter \n\t 1 - Addition \n\t 2 - Subtraction \n\t 3 - Multiplication \n\t 4 - Division \n\t 5 - Modulous\n");
    scanf("%hd",&z);
    operations(x,y,z);
    return 0;
}
//Funtion defivition for operations
void operations(short a,short b,short c)
{
    switch (c) //switch case for the operations
    {
    case 1:
        printf("Adddition of %hd and %hd is %hd",a,b,a+b);
        break;
    case 2:
        printf("Subtraction of %hd and %hd is %hd",a,b,a-b);
        break;
    case 3:
        printf("Multiplication of %hd and %hd is %hd",a,b,a*b);
        break;
    case 4:
        printf("Division of %hd and %hd is %hd",a,b,a/b);
        break;
    case 5:
        printf("Modulous of %hd and %hd is %hd",a,b,a%b);
        break;

    default:
        printf("enter correct option");
        break;
    }
}