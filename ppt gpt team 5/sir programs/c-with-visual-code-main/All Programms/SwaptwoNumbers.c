// C program to swap two variables
#include <stdio.h>

int main()
{
	int x, y;
	printf("Enter Value of x ");
	scanf("%d", &x);
	printf("\nEnter Value of y ");
	scanf("%d", &y);
	
	int temp = x;
	// Assign the value of y to x
	x = y;
	// Assign the value stored in the temporary variable to y
	y = temp;

	printf("\nAfter Swapping: x = %d, y = %d", x, y);
	return 0;
}
