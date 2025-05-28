/* 
Author: Jonah Mochori.
Reg No: BSE-01-0007/2025
Description: Program to compute BMI of and individual
Date: 28/05/2025
Version 1
*/


/*Enter the weight in kg and height in meters as floating points
calculate the BMI using the formula bmi = weight / height ^2
categorize according to BMI
- <18.5 underweight
-> 18.5 - 24.9 Normal weight
-> 25 - 29.9 overweight
-> >=30 Obesity
display category */

#include <iostream>
using namespace std;

int main() {
	float weight, height, bmi;
	// user input
	cout<<"Enter your weight and height: "<<endl;
	cin>>weight>>height;
	
	// calculate the bmi
	bmi = weight / (height * height);
	
	// categorize and display weight category
	if(bmi < 18.5) {
		cout<<"You are underweight, eat some extra calories. Your BMI is "<<bmi<<" kg/m2"<<endl;
	}
	else if(bmi >= 18.5 && bmi <=24.9) {
		cout<<"You have normal weight with a BMI of "<<bmi<<" kg/m2"<<endl;
	}
	else if(bmi >= 25 && bmi <=29.9) {
		
		cout<<"You are overweight. You have a BMI of "<<bmi<<" kg/m2"<<endl;
	}
	else {
		cout<<"You have obesity with a BMI of "<<bmi<<" kg/m2"<<endl;
	}
	
	return 0;
}