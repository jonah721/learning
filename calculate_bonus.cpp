/* 
Author: Jonah Mochori.
Reg No: BSE-01-0007/2025
Description: Program to compute Bonus
Date: 22/05/2025
Version 1
*/

#include <iostream> // input output stream, cin cout
using namespace std;

int main() {
	float salary, years_of_service, bonus, total_salary;
	
	cout<<"Enter your salary and years of service: " <<endl;
	cin>>salary>>years_of_service;
	
	
	if (years_of_service > 10){ 
		bonus = 0.1 * salary;     // avoid typecasting.
		 
	}
	else if (years_of_service >= 6 && years_of_service <= 10){
		bonus = 0.08 * salary;
		 
	}
	else{
		bonus = 0.06 * salary;
		
	}
	
	total_salary = bonus + salary;
	
	cout<<"The Net Bonus is : "<<bonus<<endl;
	cout<<"The Total Salary is: "<<total_salary<<endl;
	
	return 0;
}

