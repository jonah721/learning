/* 
Author: Jonah Mochori.
Reg No: BSE-01-0007/2025
Description: Program calculates simple interest.
Date: 05/06/2025
Version 1
*/

/*Write a function to calculate simple interest by accepting the principle 
amount, time, and rate values. The simple interest is given by 
(principal amount * time * rate) / 100
*/

/* 
Calculates simple interest
- Takes principal amount, time, rate
- Calculates interest
*/

#include <iostream>
using namespace std;

//Calculates interest
float simple_interest(float p, float t, float r) {
	float interest;
	interest = (p * t * r) / 100;
	return interest;
}

int main() {
	float principle, rate, time, resulting_interest;
	
	cout<<"This program calculates the simple interest of your money."<<endl;
	
	//Prompt user for input
	cout<<"Enter amount: "<<endl;
	cin>>principle;
	
	cout<<"Enter time period in years e.g., 2 for 2 years: "<<endl;
	cin>>rate;
	
	cout<<"Enter your rate as a percentage integer. E.g., for 3% enter 3: "<<endl;
	cin>>time;
	
	resulting_interest = simple_interest(principle, rate, time);
	
	//Display interest to user
	cout<<""<<endl;
	cout<<"The simple interest for KSh. "<<principle<<" is KSh. "<<resulting_interest<<" in "<<time<<" Years."<<endl;
	
	return 0;
	
}
