#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Farm House";
    char size = 'M';
    int personItServes = 2;
    double retailPrice = 365.8;

    cout << name << endl;               // Outputs: Farm House
    cout << size << endl;               // Outputs: M
    cout << personItServes << endl;     // Outputs: 2
    cout << retailPrice << endl;        // Outputs: 365.8


    cout << "\nYay! You have ordered a " << name << " pizza of size " << size;
    cout << " that serves " << personItServes << "." << endl;
    cout << "Please pay Rs. " << retailPrice + 3.0 << " to the delivery person." << endl;

    return 0;
}
