#include <stdio.h>
void sum();
void main()
{
    sum();
    sum();
    sum();
}
void sum()
{
    static int x=1;
    printf("\n%d",x);
    x=x+5;
}