//program to perform adition on short variables and print them with other compatible format specifier
//%d used instead of %hd which is short format specifier
#include<stdio.h>
int main()
{
    short val1,val2,val3;
    val1 = 32769;
    val2 = -32785;
    val3 = val1+val2;
    printf("\nval1 = %d",val1);
    printf("\nval2 = %d",val2);
    printf("\nAddition of val1 and val2 is %i",val1+val2); // print with only %i
    printf("\nAddition of val1 and val2 is %d",val1+val2); // print with only %d same as above print
    printf("\nAddition of val1 and val2 is %hd",val1+val2); // print with only %hd same as nxt print 
    printf("\nAddition of val1 and val2 is %hd",val3); //print with short variable
    return 0;
}