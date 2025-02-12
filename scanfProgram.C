
// C program to demonstrate that
// we can ignore some string
// in scanf()
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf("Input value read : a = %d", a);
    return 0;
}