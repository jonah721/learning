/* Write a C++ program that will implement a class named addition with three 
integers initialized to 22, 30 and 50 respectively and a member function to 
determine and output the product of the integers.
*/

/*
STEPS:
Implement a class named addition
- 3 members, integers 22, 30, 50
- 1 member function for product of the integers
Display the product
*/

#include <iostream>
using namespace std;

//Class
class Addition{
	public:
		double num_1, num_2, num_3;
		
		float multiplication(){
			
			return num_1 * num_2 * num_3;
		}
};

int main() {
	Addition multiply;
	//float product;
	
	cout<<"Calculate the product of 3 numbers here."<<endl;
	
	//User input
	cout<<"Enter 3 numbers to be multiplied: "<<endl;
	cin>>multiply.num_1 >>multiply.num_2 >> multiply.num_3;
	
	//Calculate product
	//product = multiply.multiplication();
	
	//Display product
	cout<<"The product is: "<<multiply.multiplication()<<endl;
	
	return 0;
}