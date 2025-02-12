#include <stdio.h>
union student {  
  int age;  
  float marks;   
} s;  
 
// Driver code
int main() {  
  s.age = 15;  
  printf("age = %d", s.age); 
  s.marks = 321.1231;
  printf("\nage = %d", s.age);  
  printf("\nmarks = %f", s.marks); /* marks, age share same memory location so displays same result
   if both values are 1 byte
   if more values different sizes then highest value have garbage value */
}