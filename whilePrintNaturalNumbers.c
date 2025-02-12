#include<stdio.h>
//#include<conio.h>
int main()
{
    int n=0,i=0;
    printf("Enter Number");
    scanf("%d",&n);
    printf("%d numbers using while loop\n",n);
    while(i<n){
        printf("%d ",i++);
    }
    printf("\n%d numbers using do - while loop \n",n);
    i=0;
    do{
        printf("%d ",i++);
    }while(i<n);

    return 0;
}