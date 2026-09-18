#include <iostream>
#include <cstring> // Added strings
using namespace std;

int main() {
	int capacity = 100;

	// Dynamically allocate memory on the heap for the char array
	char *str = new char[capacity];

	cout << "Enter a string: ";
	cin.getline(str, capacity);

	int len = strlen(str);

	// Reverse the string in-place
	for (int i = 0; i < len / 2; i++) {
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}

	cout << "Reversed string: " << str << endl;

	// Free the dynamically allocated memory
	delete[] str;

	return 0;
}