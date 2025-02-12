// Program to check whether a given number is Even or Odd
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check : ");
    scanf("%d",&num);
    num%2==0 ? printf("Even Number") : printf("Odd Number");
    return 0;
}