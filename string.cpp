#include <iostream>
#include <string>
using namespace std;

// Function prototype
string getFullName(string, string);

int main() {
    // String definition
    string firstName = "Arjun";
    string lastName = "Kurup";

    // Calling the function to get the full name
    string fullName = getFullName(firstName, lastName);
    cout << "Full Name: " << fullName << endl;

    // Accessing a character
    char letter = firstName[1];  // letter = 'r'
    cout << "Second letter of firstName: " << letter << endl;

    // User input
    string nickName;
    cout << "Enter nick name: ";
    getline(cin, nickName);
    cout << "Nick name is: " << nickName << endl;

    // length(): returns the length of the string
    int length = firstName.length();  // length of "Arjun" is 5
    cout << "Length of firstName: " << length << endl;

    // compare(): compares two strings lexicographically
    int result = firstName.compare(lastName);  // Arjun vs Kurup
    if (result == 0) {
        cout << "First name and last name are equal." << endl;
    } else {
        cout << "First name and last name are not equal." << endl;
    }

    // append(): adds new characters (string) at the end of another string object
    firstName.append(lastName);  // firstName = "ArjunKurup"
    cout << "After appending, firstName: " << firstName << endl;

    // Modify the value
    lastName = "Riya";
    cout << "Modified value of firstName: " << firstName << endl;

    return 0;
}

// Function definition to concatenate first and last name
string getFullName(string firstName, string lastName) {
    string fullName = firstName + " " + lastName;  // Concatenate with space
    return fullName;
}
