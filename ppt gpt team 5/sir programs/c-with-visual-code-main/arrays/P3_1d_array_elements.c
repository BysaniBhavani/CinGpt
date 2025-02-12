#include <stdio.h>
int main()
{
    // array to store digits
    int a[100000];
    int i, b;
    printf("enter the size of : ");
    scanf("%d", &b);
    for (i = 0; i < b; i++)
    {

        // %1d reads a single digit
        scanf("%1d", &a[i]);
    }

    for (i = 0; i < b; i++)
        printf("%d ", a[i]);

    return 0;
}