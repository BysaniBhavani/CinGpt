#include<stdio.h>
int main()
{
    float add,sub,mul,div,mod,input1,input2;
    printf("Enter a value : ");
    scanf("%f",&input1);
    printf("Enter another value : ");
    scanf("%f",&input2);
    printf("Addition of the numbers %f and %f is %f\n",input1,input2,input1+input2);
    printf("Subtraction of two numbers %f and %f is %f\n",input1,input2,input1-input2);
    printf("Multiplication of two numbers %f and %f is %f\n",input1,input2,input1*input2);
    printf("Division of two numbers %f and %f is %f\n",input1,input2,input1/input2);
    printf("Modulous of two numbers %d and %d is %d ",(int)input1,(int)input2,(int)input1%(int)input2);
    return 0;
}