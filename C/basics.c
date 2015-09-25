/* Multiline 
Comment */

// Single line comment

#include <stdio.h>
#include <string.h>

// this is how you make a constant
#define MYNAME "Jonatan Sala"
// global variable
int globalVar = 100;

int main() {

	char firstLetter = 'D';

	int age = 20;

	long int superBigNumber = -2323423423;

	float piValue = 3.14159;

	double reallyBigPi = 3.1415938928938789;

	printf("\n");	// line return \t - tab
	printf("This will print to screen \n\n");

	printf("I am %d years old \n", age);
	// %d is for int
	// %ld is for long int
	// %f is for float or double (%.5f to 5 decimal places)
	// %c is for char
	// %s is for string

	// this is making a string
	char myName[13] = "Jonatan Sala";

	printf("My name is %s \n\n", myName);

	// changing string value
	// used from the <string.h>
	strcpy(myName, "Solomon Sala");


	// Getting input from the user
	char middleInitial;

	printf("What is your middle initial? ");
	// recive the input from user
	scanf(" %c", &middleInitial);
	printf("Middle initial \t %c \n", middleInitial);

	char firstName[30], lastName[30];

	printf("What is your name? \t");

	scanf(" %s %s", firstName, lastName);

	printf("Your name is %s %c %s\n\n", firstName, middleInitial, lastName);

	int month, day, year;

	printf("What is your date of birth: \t");
	scanf("%d %d %d", &day, &month, &year);
	printf("Your date of birth: %d/%d/%d\n", day, month, year);

	// Arithmetic
	// +, -, *, /, %

	int num1 = 12, num2 = 15, numAns;

	float decimal1 = 1.2, decimal2 = 1.5, decimalAns;

	printf("Integer Calculation %d\n\n", num2/ num1);
	printf("Float Calculation %d\n\n", num2 * num1);
	printf("Modulus Calculation %d\n\n", num2 % num1);

	// +=, -=, *=, /=, ++, --

	// Casting
	printf("Double to int %d\n", (int) decimal1);

	return 0;


}