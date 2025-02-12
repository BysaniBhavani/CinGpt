// program to print unsigned integers with input as -ve and +ve valuesg
// %u is the format specifier for unsigned
//unsigned has 0 to 65,535 range limit and 16 or 32 bits size according to the system configaration
//unsigned int can only save positive(+ve) values
//Sizeof is a common operator in C. It’s used to determine the size, in bytes, of a particular data type or variable.
#include<stdio.h>
int main()
{
    unsigned val1,val2;
    val1 = -3121; // only +ve values will be assigned so random value will be assigned
    val2 = 123412;
    printf("val1 is %u\n",val1);//val1 is the random value
    printf("val2 is %u\n",val2);
    printf("%lu",sizeof(val2));//size of val2 in bytes will be returned and printed
    return 0;
}