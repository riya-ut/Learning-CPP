#include <iostream>
using namespace std;

class Circle {              // Encapsulation: grouping similar data and function into a group

    private:    // Access Specifier    //Data hiding
        float radius;

	public:		// Access Specifier
        void setRadius(float radius) {
            this->radius = radius;      //Abstraction     
        }

		double getArea() {              //Abstraction: just hiding the things how they are implementing
			return 3.14 * radius * radius;
		}
};


int main() {

	Circle circle;
	circle.setRadius(5);
	double area = circle.getArea();
	cout << "Area of the circle is " << area << " square units." << endl;

	return 0;
}