/* A program on relational operators.
In this program we will provide different input datatypes like int, float
but return values will be boolean that is either 1 or 0
1 is true  and 0 is false

Relational operators are used for the comparison of two values to understand 
    the type of relationship a pair of number shares

*/

// C program to demonstrate working of relational operators
#include <stdio.h>
 
int main()
{
    int a = 10, b = 4;
    float c = 10.231, d = 123.312;
 
    // greater than example
    if (a > b)
        printf("a is greater than b\n");
    else
        printf("a is less than or equal to b\n");
 
    // greater than equal to
    if (c >= d)
        printf("c is greater than or equal to d\n");
    else
        printf("c is lesser than d\n"); 
 
    // less than example
    if (a < b)
        printf("a is less than b\n");
    else
        printf("a is greater than or equal to b\n");
 
    // lesser than equal to
    if (c <= d)
        printf("c is lesser than or equal to d\n");
    else
        printf("c is greater than d\n");
 
    // equal to
    if (a == b)
        printf("a is equal to b\n");
    else
        printf("a and b are not equal\n");
 
    // not equal to
    if (c != d)
        printf("c is not equal to d\n");
    else
        printf("c is equal d\n");
 
    return 0;
}