#include <stdio.h>
int main() 
{    

    int number1, number2, sum;
    
    printf("Enter only integers values: ");
    scanf("%d %d", &number1, &number2);

    // calculate the sum
    sum = number1 + number2;      
    
    printf("input1: %d + input2: %d = %d", number1, number2, sum);
    return 0;
}
