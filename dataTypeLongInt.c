// program to print Long integers with input as -ve and +ve values
// %li %li is the format specifier for long int
//long int has -2,147,483,647 to 2,147,483,647	limit and 32 bits size
//long long int -(2^63) to (2^63)-1 limit and 64 bits size
//%lld %lli is the format specifier for long long int
#include<stdio.h>
int main()
{
    long int val1,val2;
    val1 = -2,147,483,788; // random value will be assigned
    val2 = 123412123123;
    printf("val1 is %li\n",val1);//val1 is the random value
    printf("val2 is %ld\n",val2);//overflow warning will be displayed
    printf("%lu bytes\n",sizeof(val2));//size of val2 in bytes will be returned and printed
    long long int val3;
    printf("may be long long int val1 * val2 is %lld and its size in bytes is %lu ",val1*val2,sizeof(val3));
    return 0;
}