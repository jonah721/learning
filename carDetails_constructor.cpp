/* 
Author: Jonah Mochori.
Reg No: BSE-01-0007/2025
Description: Program uses constructors to display car details.
Date: 19/06/2025
Version 1
*/

#include <iostream>
#include <string>
using namespace std;

class Car{                 // The Class
	public:				// Access specifier
		string brand;      // Attribute
		string model;      // Attribute
		int year;          // Attribute
		
		// A parametarized constructor -- has parameters
		Car(string x, string y, int z) { // Constructor with parameters
			brand = x;
			model = y;
			year = z;
			
			// 
			cout<<"This constructor has parameters."<<endl;
		}
		
		/* Destructor -- Clears memory allocated by the constructor
		instances created -- number of objects, here 3 of them. */
		~Car () {
			cout<<"Destructor at work."<<endl;
		}
};

int main () {
	// Create Car objects and call the constructor with different values
	Car carObj1("BMW", "X5", 1999);
	Car carObj2("Ford", "Mustang", 1969);
	Car carObj3("Tesla", "S3 plad", 2020);
	cout<<""<<endl;
	
	// Print values
	cout<< carObj1.brand << " " << carObj1.model << " " << carObj1.year <<endl;
	cout<< carObj2.brand << " " << carObj2.model << " " << carObj2.year <<endl;
	cout<< carObj3.brand << " " << carObj3.model << " " << carObj3.year <<endl;
	cout<<""<<endl;
	
	return 0;
}