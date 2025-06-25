/* 
Author: Jonah Mochori.
Reg No: BSE-01-0007/2025
Description: Program introduces use of constructors
Date: 19/06/2025
Version 1
*/

/*
A constructor in C++ is a special method in a class that is automatically called
when an object of that class is created. It does not need to be directly called in the 
main function.

Characteristics:
-It is always in public access
-Has the same name as the class
-Has no return value since it automatically returns when the object is created 
-Used to initialize the values of private members in a class

Types: 
- Default, parametarized, copy and move.
- Parametarized move and copy have parameters.


*/

#include <iostream>
using namespace std;

class MyClass {                    // The class
	public:                        // Access specifier
		// Default constructor -- does not have parameters
		MyClass() {
			cout<<"Hello World! \n"<<endl;  // Constructor
			 
		}

		~MyClass () {
			cout<<"Destructor complete \n"<<endl;
		}
};

int main() {
	MyClass myObj;  // Create an object of MyClass (this will call the constructor)
	
	return 0;
}