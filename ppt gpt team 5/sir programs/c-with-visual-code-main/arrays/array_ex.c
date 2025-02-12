/*
Arrays are used to store multiple values in a single variable,
instead of declaring separate variables for each value.
To create an array, define the data type (like int)
and specify the name of the array followed by square brackets [].
To insert values to it, use a comma-separated list, inside curly braces:
syntax
int myNumbers[] = {25, 50, 75, 100};

We have now created a variable that holds an array of four integers.
Access the Elements of an Array
To access an array element, refer to its index number.
Array indexes start with 0: [0] is the first element. [1] is the second element, etc.
This statement accesses the value of the first element [0] in myNumbers:
*/

#include <stdio.h>
int main()
{
    int mynum[] = {25, 50, 75, 100};
    printf("The output will be: %d", mynum[2]);
    return 0;
}