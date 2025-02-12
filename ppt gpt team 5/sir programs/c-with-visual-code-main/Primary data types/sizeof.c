/*
Size of Data Types in C
The size of the data types in C is dependent on the size of the architecture,
so we cannot define the universal size of the data types.
For that, the C language provides the sizeof() operator to check the size of the data types.
*/


#include <stdio.h>
int main()
{
int a = sizeof(int);
int b = sizeof(char);
int c = sizeof(double);
printf("output is %d \n", a);
printf("output is %d \n", b);
printf("output is %d \n", c);
return 0;
}