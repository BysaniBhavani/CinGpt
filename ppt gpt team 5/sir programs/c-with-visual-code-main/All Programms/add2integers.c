// C program to add two numbers 
#include <stdio.h> 

int main() 
{ 
	int A, B, sum = 0; 
	printf("Enter two numbers A and B : \n"); 

	// Read two numbers from the user
	scanf("%d%d", &A, &B); 
	sum = A + B; 

	// Print the sum 
	printf("Sum of A and B is: %d", sum); 

	return 0; 
}
