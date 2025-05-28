/* 
Author: Jonah Mochori.
Reg No: BSE-01-0007/2025
Description: Program to compute Bonus
Date: 28/05/2025
Version 1
*/

/* Prompts user to enter 3 marks
- Declare 3 variables floats
Calculates average
- Declare average variable
Determine grade
A - 70-100
B - 60-69
C - 50 -59 
D - 40-49
E(Fail) - below 39
*/

#include <iostream>
using namespace std;

int main() {
	float mark_1, mark_2, mark_3, average;
	
	// Prompt user for marks
	cout<<"Enter marks for 3 subjects of your choice: "<<endl;
	cin>>mark_1>>mark_2>>mark_3;
	
	// Calculate average
	average = (mark_1 + mark_2 + mark_3) / 3;

	// Determine grade and display
	if(average >= 0 && average < 40) {
		cout<<"Average: "<<average<<" Grade is E (fail)."<<endl;
		
	}
	else if(average >= 40 && average < 50) {
		cout<<"Average: "<<average<<"\nGrade is D."<<endl;

	}
	else if(average >= 50 && average < 60) {
		cout<<"Average: "<<average<<"\nGrade is C."<<endl;

	}
	else if(average >= 60 && average < 70) {
		cout<<"Average: "<<average<<"\nGrade is B."<<endl;

	}
	else {
		cout<<"Average: "<<average<<"\nGrade is A."<<endl;
	}
	
	return 0;
}
