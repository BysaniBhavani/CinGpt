#include<stdio.h>
int main()
{
    int userInput;
    scanf("%i",&userInput);
    printf("with i format specifier %i",userInput);
    scanf("%d",&userInput);
    printf("with d format specifier %d",userInput);
    return 0;
}