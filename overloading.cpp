// Function Overloading
#include <iostream>
using namespace std;

void add(int, int);
void add(string, string);
void add(int, int, int);


int main() {

	// Function Overloading
	add(10, 20);
	add("Hello ", "World");
	add(91, 85, 74);

	return 0;
}

void add(int num1, int num2) {

	cout << num1 + num2;
	cout << endl;
}

void add(string str1, string str2) {

	cout << str1 + str2;
	cout << endl;
}

void add(int num1, int num2, int num3) {

	cout << num1 + num2 + num3;
	cout << endl;
}