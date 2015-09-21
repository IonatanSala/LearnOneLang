// Types and Descriptions

	// Basic Type
		// - integer types
		// - floating-point types

	// Enumerated types
		// used to define variables that can only be addigned certain discrete integer values throughout the program

	// The type void
		// the typespecifier void indicates that no value is available.

	// Derived types
		// - Pointer types
		// - array types
		// - structure types
		// - union types 
		// function types

// Integer Types
	// char	1 byte	-128 to 127 or 0 to 255
	// unsigned char	1 byte	0 to 255
	// signed char	1 byte	-128 to 127
	// int	2 or 4 bytes	-32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
	// unsigned int	2 or 4 bytes	0 to 65,535 or 0 to 4,294,967,295
	// short	2 bytes	-32,768 to 32,767
	// unsigned short	2 bytes	0 to 65,535
	// long	4 bytes	-2,147,483,648 to 2,147,483,647
	// unsigned long	4 bytes	0 to 4,294,967,295


// Floating-Point Types
	// float	4 byte	1.2E-38 to 3.4E+38	6 decimal places
	// double	8 byte	2.3E-308 to 1.7E+308	15 decimal places
	// long double	10 byte	3.4E-4932 to 1.1E+4932	19 decimal places


#include <stdio.h>
#include <limits.h>

int main() {
  	
  	printf("Storage size for int: %d \n", sizeof(int));
  	
	return 0;
}