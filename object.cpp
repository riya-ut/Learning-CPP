// Class and Object

#include <iostream>
using namespace std;

class Employee

{
    private:
        /* data */
    public:                 // Acess specifier
        int id;             //Attribute or data member
        string firstName;   //Attribute or data member
        string lastName;    //Attribute or data member
    
};

int main () {

    // Create an object  of Employee class
    Employee emp1;
    

    //Acess attributes and set values
    emp1.id = 1;
    emp1.firstName = "Arjun";
    emp1.lastName = "Kurup";

    // Print attribute values
    cout << "ID: " << emp1.id << endl << "Name: " << emp1.firstName << " " << emp1.lastName << "\n\n";

    //Another Employee object
    Employee emp2;
    emp2.id = 2;
    emp2.firstName = "Riya";
    emp2.lastName = "Arjun";


    cout << "ID: " << emp2.id << endl << "Name: " << emp2.firstName << " " << emp2.lastName << "\n\n";
    return 0;
}