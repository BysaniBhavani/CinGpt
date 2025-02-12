#include<stdio.h>
#include<conio.h>
void main()
{
    int number;
    printf("Enter a Number");
    scanf("%d",&number);
    if(number%97)
        printf("%d not disible by 97",number);
    else
        printf("%d divisible by 97",number);
    getch();
}