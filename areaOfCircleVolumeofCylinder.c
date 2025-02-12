#include<stdio.h>
int main()
{
    int radius,height;
    float area,volume,PI = 3.14;
    printf("Enter radius and height of the cylinder");
    scanf("%d%d",&radius,&height);
    area=PI*radius*radius;
    volume=area*height;
    printf("Area of the circle %f",area);
    printf("\nVolume of the cylinder %f",volume);
    return 0;
}