#include <stdio.h>

int main() {

	// Operators
	// >, <, ==, <=, >=, !=

	printf("\n");

	int num1 = 1, num2 = 2;

	printf("Is 1 > 2 : %d\n\n", num1 > num2);

	// if else statements

	if(num1 > num2) {
		printf("%d is greater than %d\n", num1, num2);
	} else if(num1 < num2) {
		printf("%d is less than %d\n", num1, num2);
	} else {
		printf("%d is equal to %d\n", num1, num2);
	}

	return 0;
}