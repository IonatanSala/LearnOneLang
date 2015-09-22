// Basic variables in C

	// char - typically single octet(one byte). This is an integer type
	// int - The most natural size of integer for the machine
	// float - a single-precision floating point value
	// double - a double-precision foating point value
	// void - represent the absence of type

#include <stdio.h>

// Variable declaration:
// use extern keyword to declare a variable at any place
extern int a, b;
extern int c;
extern float f;

// function declaration
int func();

int main () {
  /* variable definition: */
  int a, b;
  int c;
  float f;

  int i = func();
 
  /* actual initialization */
  a = 10;
  b = 20;
  
  c = a + b;
  printf("value of c : %d \n", c);

  f = 70.0/3.0;
  printf("value of f : %f \n", f);
 
  return 0;
}

int func() {
  return 0;
}
