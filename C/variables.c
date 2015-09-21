// Basic variables in C

	// char - typically single octet(one byte). This is an integer type
	// int - The most natural size of integer for the machine
	// float - a single-precision floating point value
	// double - a double-precision foating point value
	// void - represent the absence of type

#include <stdio.h>

// Variable declaration:
extern int a, b;
extern int c;
extern float f;

int main () {
  /* variable definition: */
  int a, b;
  int c;
  float f;
 
  /* actual initialization */
  a = 10;
  b = 20;
  
  c = a + b;
  printf("value of c : %d \n", c);

  f = 70.0/3.0;
  printf("value of f : %f \n", f);
 
  return 0;
}
