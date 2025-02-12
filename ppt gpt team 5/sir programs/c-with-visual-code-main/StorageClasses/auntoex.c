#include <stdio.h>
int main()
{
    auto int a = 10;
    {
        auto int a = 20;
        printf("%d \n", a);
    }
    printf("%d", a);
    return 0;
}