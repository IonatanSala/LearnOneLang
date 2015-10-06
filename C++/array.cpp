#include <iostream>

using namespace std;

int main() {

	int numbers_one[5];

	int numbers_two[] = {1,2,3,4,5};

	// getting the length of the array
	int length_of_numbers_two = sizeof(numbers_two)/sizeof(int);

	cout << "The lenght of number_two is: " << length_of_numbers_two << endl;

	// multi-dimension array
	int coords[3][2];

	for(int i = 0; i< 3; i++) {
		for(int j = 0; j<2; j++) {
			coords[i][j] = i + j;
		}
	}

	for(int i =0; i<3; i++) {
		cout << "(" << coords[i][0] << "," << coords[i][1] << ")" << endl;
	}

	return 0;
}