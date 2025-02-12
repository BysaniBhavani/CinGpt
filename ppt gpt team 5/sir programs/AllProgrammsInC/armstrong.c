#include<stdio.h>
int main()
{
    int num1,num2,temp1,temp2,sum=0;
    printf("Enter first value for interval : ");
    scanf("%d",&num1);
    printf("Enter second value for interval : ");
    scanf("%d",&num2);
    if(num2 < num1){
        temp1 = num1;
        num1 = num2;
        num2 = temp1;
    }
    while(num1<=num2)
    {
       // printf("entered while loop \n");
        sum=0;
        temp2=0;
        for(temp1 = num1;temp1 > 0;temp1=temp1/10){
           // printf("temp1 %d \n",temp1);
            temp2=temp1%10;
            sum += temp2 *temp2 * temp2;
        }
       // printf("sum %d\n",sum);
        if(sum==num1){
            printf("%d ",num1);
        }
        num1++;
    }
    return 0;
}