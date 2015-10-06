#include <iostream>
#include <cstring>
using namespace std;

int main() {

	// both these do the same thing
	char name[] = {'j', 'o', 'n', 'o'};
	char name2[] = "jono";

	char first_name[] = "Jonatan";
	char last_name[] = "Sala";
	char full_name[20] = {'\0'};

	strcat(full_name, first_name);
	strcat(full_name, " ");
	strcat(full_name, last_name);

	cout << full_name << endl;

	string s_full_name = "Jonatan Sala";
	char my_full_name[20];
	strcpy(my_full_name, s_full_name.c_str());
	cout << my_full_name << endl;

	return 0;
}