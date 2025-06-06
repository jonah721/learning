/* 
Author: Jonah Mochori.
Reg No: BSE-01-0007/2025
Description: Program shows use of funtions in C++
Date: 05/06/2025
Version 1
*/


//Functions: User defined, predefined
// Explain why every line is included using comments

#include<iostream>
#include <cmath>
using namespace std;

// function prototype written when the function is defined after the main function.
int multiplication(int x, int y);
float dividing(float a, float b);
float total(float c, int d, float e);
float average(float k);

// Function declared before the main function, no prototype.
int addition(int x, int y) {
	
	return x + y;
}

int main() {
	int sum, product, num_1, num_2;
	float division, their_average, aggregate;
	cout<<"Functions in C++ "<<endl;
	
	//Calling function - pass them arguments
	cout<<"Enter 2 numbers to be totalled: "<<endl;
	cin>>num_1>>num_2;
	sum = addition(num_1, num_2);
	cout<<"The sum is: "<<sum<<endl;
	
	product = multiplication(15, 28);
	cout<<"The product is: "<<product<<endl;
	
	division = dividing(20.2, 1.5);
	cout<<"The division result is: "<<division<<endl;
	
	aggregate = total(sum, product, division);
	cout<<"The total of addition, division, and product is: "<<aggregate<<endl;
	
	their_average = average(aggregate);
	cout<<"The average of the 3 is "<<their_average<<endl;
	
	return 0;
}

  // function definition
int multiplication(int x, int y) {
	return x * y;
}

float dividing(float a, float b) {
	
	return a / b;
}

float total(float c, int d, float e) {
	float adding_them;
	adding_them = c + d + e;
	return adding_them;
}

float average(float k){
	float average;
	average = k / 3;
	return average;
}
