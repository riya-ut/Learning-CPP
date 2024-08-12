#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Farm House";
    char size;
    int personItServes;
    double retailPrice;
    
    cout << "Enter pizza name:";
    getline(cin, name);

    cout << "Enter the size of the pizza as either 's', 'm'  or 'l':";
    cin >> size;

    cout << "Enter the number of person it serves: ";
    cin >> personItServes;

    cout << "Enter retail price:";
    cin >> retailPrice;


    cout << "\nYay! You have ordered a " << name << " pizza of size " << size;
    cout << " that serves " << personItServes << "." << endl;
    cout << "Please pay Rs. " << retailPrice + 3.0 << " to the delivery person." << endl;

    return 0;
}
