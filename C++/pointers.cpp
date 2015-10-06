// Pointers in c++

	// A pointer is a ay to share a memory address
	// among different contexts.
	
	// Primarily they are used when a function needs to modify
	// the content of a variable of which it doesn't have ownership

	// How do we access the memory address of a variable:
	
		// We need to prepend our variable with the sign '&', e.g : &val
		// That returns the memory address o val

		// Then to point to that memory address we need to point to it :P
		// e.g 
			// int x = 1000;
			// int *my_pointer = &x;
			// my_pointer now holds the address of x.


#include <iostream>

using namespace std;

// take in the pointer to that address
// what this happens in the folloing arg is:
// int *my_age_pointer = &my_age;
void next_year(int *my_age_pointer) {
	// increment the value that the pointer points too.
	(*my_age_pointer)++;
}

int main() {

	// declare my variable
	int my_age = 20;

	// pass in the address of my_age to next_year() function
	next_year(&my_age);

	cout << my_age << "\n";


	return 0;
}
		
		
		

