/*
Void Data Type
The void data type in C is used to specify that no value is present. 
It does not provide a result value to its caller. It has no values and no operations. 
It is used to represent nothing. Void is used in multiple ways as function return type, 
function arguments as void, and pointers to void.

Syntax:
    function return type void
void exit(int check);
    Function without any parameter can accept void.
int print(void);
    memory allocation function which
    returns a pointer to void.
void *malloc (size_t size);
*/

// C program to demonstrate
// use of void pointers
#include <stdio.h>

int main()
{
	int val = 30;
	void* ptr = &val;
	printf("%d", *(int*)ptr);
	return 0;
}
