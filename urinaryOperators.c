/*
A program to perform single operand operations i.e; Urinary operators
Unary operators are the operators that perform operations on a single operand to produce a new value.
Types of unary operators
Types of unary operators are mentioned below:

Unary minus ( – ) : changes the sign of its argument. +ve value to -ve and vice versa
        Unary minus is different from the subtraction operator, as subtraction requires two operands.
Increment ( ++ )
Decrement ( — )
NOT ( ! )
Addressof operator ( & )
sizeof()
*/


// C Program to illustrate the use of 'unary minus operator'
#include <stdio.h>
 
int main()
{
    // declaring a positive integer
    int positiveInteger = 100;
    // using - sign to make the value of positive integers
    // to negative
    int negativeInteger = -positiveInteger;
 
    printf("Positive Integer = %d\n", positiveInteger);
    printf("Negative Integer = %d", negativeInteger);
    return 0;
}