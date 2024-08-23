#include <iostream>
#include <string>
using namespace std;

class Person {

	protected:
		string phoneNumber;

	public:
		string fullName;

		void setPhoneNumber(string phoneNumber) {
			this->phoneNumber = phoneNumber;
		}

		void displayPersonDetails() {
			cout << "Name: " << fullName << ", Phone: " << phoneNumber << endl;
		}
};

class Student : public Person {
	public:
		int id;

		void displayStudentDetails() {

			cout << "id: " << id << ", Name: " << fullName << ", Phone: " << phoneNumber << endl;
		}
};

int main() {

	Person person; 
	person.fullName = "Arjun Kurup"; 
	person.setPhoneNumber("+91-8891475898");
//  string phNo = person.phoneNumber;			//protected: Cannot be accessed. Error.	
	person.displayPersonDetails(); 

	Student student;
	student.id = 1;
	student.fullName = "Riya";
	student.setPhoneNumber ("+91-6238070948");
//  string phNo = student.phoneNumber;			//protected: Cannot be accessed. Error.	
	student.displayPersonDetails();

	return 0;
}