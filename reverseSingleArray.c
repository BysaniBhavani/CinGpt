/*
    -- An array is a variable that can store multiple values.

    This is program to reverse the order of the array values,
    Size of the array will also be entered in runtime
    checking will arrays can be assigned directly with other arrays

*/
#include <stdio.h>

int main() {
  int i , n ;

  printf("Enter size of array : ");
  scanf("%d",&n);

  int values[n];

  printf("Enter %d integers: ",n);

  // taking input and storing it in an array
  for(i = 0; i < n; i++) {
     scanf("%d", &values[i]);
  }
  
  // printing elements of an array
  printf("Arrays values are : ");
  for(int i = 0; i < n; i++) {
     printf("%d  ", values[i]);
  }
  int valuesReverse[n];
  //valuesReverse = values; //remove comments error will be displayed, arrays can not be assigned directly.

  for(i=1; i <= n ; i++){
    valuesReverse[n-i] = values[i-1];
   // printf("\nvalue assigning is %d ",values[i-1]);
  }
   // printing elements of an array
   printf("\nArrays values in reverse are : ");
  for(i = 0; i < n; i++) {
     printf("%d  ", valuesReverse[i]);
  }
}