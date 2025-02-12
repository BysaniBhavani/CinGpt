#include <stdio.h>

/*A 
pointer is a variable that stores the memory address of another variable as its value.
A pointer variable points to a data type (like int) of the same type, and is created with the * operator.
The address of the variable you are working with is assigned to the pointer:

They are important in C, because they allow us to manipulate the data in the computer's memory.
This can reduce the code and improve the performance. 
If you are familiar with data structures like lists, trees and graphs,
you should know that pointers are especially useful for implementing those. 
And sometimes you even have to use pointers, for example when working with files. */

int main()
{
    
    int a = 10;
    int *ptr;
    ptr = &a;
    printf("\n THe value of a = %d", a);
    printf("\n THe adress of a = %d", &a);
    printf("\n THe value of ptr = %d", ptr);
    printf("\n THe adress of ptr = %d", &ptr);
    printf("\n THe value pointer by ptr= %d", *ptr);
    return 0;
}