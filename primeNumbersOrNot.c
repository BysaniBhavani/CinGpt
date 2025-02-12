#include<stdio.h>
int main()
{
    int input,temp=0,primeConst=0;
    printf("Enter a number to check Prime Number : ");
    scanf("%d",&input);
    if(input%2 != 0)
    {
        if(input == 1){
            primeConst=0;
        }
        else{
            temp = input/2;
            for(int i=3;i<=temp;i++)
            {
                if(input%i == 0) 
                {
                    primeConst=1;
                    break;
                }
            }
        }
    }
    else if(input == 2) 
    {
        primeConst=0;
    }
    else primeConst = 1;

    if(primeConst==0) printf("Prime Number");
    else printf("Not Prime Number");

    return 0;
}