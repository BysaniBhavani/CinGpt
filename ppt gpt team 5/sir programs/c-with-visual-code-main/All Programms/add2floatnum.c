// C program to multiply two floating point numbers 
#include <stdio.h> 
float multiply(float a, float b) 
{ 
return a * b; 
} 

// Driver code 
int main() 
{ 
	float A = 2.12, B = 3.88, total; 
	
	total = multiply(A, B); 

	printf("Product of entered numbers is:%.3f", total); 

	return 0; 
}
