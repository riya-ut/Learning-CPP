// Class and Object

#include <iostream>
#include <string>
using namespace std;

class Employee

{
    private:
        /* data */
    public:                 // Acess specifier
        int id;             //Attribute or data member
        string firstName;   //Attribute or data member
        string lastName;    //Attribute or data member
        
        Employee();         // Default Constructor declaration 

        string getFullName() {          // Method/ function fefinition
            return firstName + " " + lastName;
        }
        void displayDetails();      // Method/ function fefinition     
        
};

Employee :: Employee()  {       //constructor definition
            cout << "Employee object is created\n";

}

void Employee :: displayDetails() {        //were :: is called Scope resolution operator
    cout << "ID: " << endl << "Name: " << getFullName () << "\n\n";

}

int main () {

    // Create an object  of Employee class
    Employee emp1;
    

    //Acess attributes and set values
    emp1.id = 1;
    emp1.firstName = "Arjun";
    emp1.lastName = "Kurup";
    

    // Print attribute values
    emp1.displayDetails();

    //Another Employee object
    Employee emp2;
    emp2.id = 2;
    emp2.firstName = "Riya";
    emp2.lastName = "Arjun";

    emp2.displayDetails ();
    return 0;
}