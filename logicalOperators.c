/*
A program to perform logical operations
Logical operators in C are used to combine multiple conditions/constraints. 
Logical Operators returns either 0 or 1, it depends on whether the expression result is true or false.
In C programming for decision-making, we use logical operators.

We have 3 logical operators in the C language:

Logical AND ( && ) :If both operands are non zero then the condition becomes true other wise false
Logical OR ( || ) : The condition becomes true if any one of them is non-zero. Otherwise, it returns false 
Logical NOT ( ! ) : If the condition is true then the logical NOT operator will make it false and vice-versa. 

Input can be expression that returns a value or numerical values
return value is boolean that is either 1 or 0

*/

#include <stdio.h>
int main()
{
    int a = 10, b = 20 , c = -1;
 
    if (a > 0 && b > 0) {     // Logical AND Operator
        printf("Both values are greater than 0\n");
    }
    else {
        printf("Both values are less than 0\n");
    }
    
    if (c > 0 || b > 0) {      // Logical OR Operator
        printf("Any one of the given value is "
               "greater than 0\n");
    }
    else {
        printf("Both values are less than 0\n");
    }

    if (!(a > 0 && b > 0)) {
        //condition returned true but logical NOT operator changed it to false
        printf("Both values are greater than 0\n");
    }
    else {
        printf("Both values are less than 0\n");
    }
    return 0;
}