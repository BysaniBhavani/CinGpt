/* 
    below is the program for accepting single digits, 2digits in runtime for an  array
    Input will be given with out spaces. Analying how it is accepting in the array
    Display of the array using while loops

    Input type : integer
    Output : display of arrays
*/
#include<stdio.h>
int main()
{
    int sizeOfArray,i=0;
    printf("Enter size of Array : ");
    scanf("%1d",&sizeOfArray);
    int singleDigitArray[sizeOfArray], twoDigitArray[sizeOfArray];
    printf("Size of Array assigned is %d\n",sizeof(singleDigitArray)/sizeof(singleDigitArray[0]));
    printf("\nSize of Array assigned is %d\n",sizeof(singleDigitArray));
    printf("Enter %d values with our spaces for single digit array\n",sizeOfArray);
    while(i<sizeOfArray){
        scanf("%1d",&singleDigitArray[i]);
        i++;
    }
   // printf("i value after reading is %d ",i);
    printf("Array in reverse order :");
    while(i>0){ // displaying array in reverse order, i will be size of array so using --i for printing
        printf("\t%d",singleDigitArray[--i]);
    }
    printf("\nSize of Array assigned is %d\n",sizeof(singleDigitArray));
    //size of the aray using pointer and address
    printf("array size/lenght using pointer is %d \n",*(&singleDigitArray+1)-singleDigitArray);
    i=0;
    printf("enter values for 2 digit array\n");
    while(i<sizeOfArray){
        scanf("%2d",&twoDigitArray[i]);
        i++;
    }
    printf("Array in reverse order :");
    while(i>0){ // displaying array in reverse order, i will be size of array so using --i for printing
        printf("\t%d",twoDigitArray[--i]);
    }
}