#include<stdio.h>
int main()
{
    char name[10] = "bhavani";
    printf("Predefined\n%s",name);
    printf("\nEnter name :");
    for(int i=0;i<10;i++)
        scanf("%c",&name[i]);
    printf("User input %s",name);
    printf("This is Bhavani.");
    char s[20]="Hello\0Hi";
    printf("%s",s);
    printf("%d %d",strlen(s),sizeof(s));
    char *s = "Hello";

    while(*s!=NULL)
    {
        printf("%c",*s++);
    }
    return 0;
    int n = +67;
}