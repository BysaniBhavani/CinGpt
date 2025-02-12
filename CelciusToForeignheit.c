#include<stdio.h>
#include<conio.h>
void main()
{
    float temCelcius,temForeignheit, con = 9.0/5 ;
    printf("Enter temparature in Celcius");
    scanf("%f",&temCelcius);
    //printf("\n%f ",con);
    temForeignheit = con * temCelcius + 32 ;
    printf("Temparature in foreignheit is % f",temForeignheit);
    getch();
   /* checking the validity of the variable initializations
    int a ;
    b=a; //invalid because b is not declared 
    int v = 3^3;
    char dt = '20Dec2022';
    printf("\n%d",b);
    printf("\n%c",dt);
    printf("\n%d",v); */
}