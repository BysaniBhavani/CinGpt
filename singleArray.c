/*
    -- An array is a variable that can store multiple values.
    -- Arrays are used to store multiple values in a single variable,
        instead of declaring separate variables for each value.
    -- To create an array, define the data type (like int) 
    and specify the name of the array followed by square brackets [].
    -- To insert values to it, use a comma-separated list, inside curly braces:
            int myNumbers[] = {25, 50, 75, 100};
    --  To access an array element, refer to its index number.
            Array indexes start with 0: [0] is the first element. [1] is the second element, etc.
                myNumbers[0]
*/
// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array

#include <stdio.h>

int main() {

  int values[5];

  printf("Enter 5 integers: ");

  // taking input and storing it in an arrayrwdx czx
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  // printing elements of an array
  for(int i = 0; i < 5; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}