#include <iostream>
#include <sstream>

using namespace std;

int main() {
	string my_string;
	cin >> my_string;

	stringstream ss(my_string);

	cout << my_string.size() << endl;
	int my_ints[my_string.size()];
	
	for(int i = 0; i<my_string.length(); i++) {
		if(my_string[i] != ',') {
			ss >> my_ints[i];
		}
	}

	for(int i = 0; i<sizeof(my_ints)/ sizeof(int); i++) {
		cout << my_ints[i];
	}

	return 0;
}