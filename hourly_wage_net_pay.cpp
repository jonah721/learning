/* 
Author: Jonah Mochori.
Reg No: BSE-01-0007/2025
Description: Program calculates gross-pay, net-pay and taxes from hourly wage.
Date: 05/06/2025
Version 1
*/


/* Write a function that requests the user 
to enter hours worked in a week and the hourly wage. 
The program should then print the gross pay, the taxes,
and the net pay. Assume the following:

Overtime (in excess of 40 hours per week) = time and a half
Tax rate: 15% of the first $600, 20% of the rest.
*/

/* 
Takes hours worked in a week and hourly age in dollars
- Check if hours exceed 40 for overtime
	- If so, calculate overtime equivalent in normal hours
	- If not, calculate wage directly
	
Displays gross pay, taxes and net pay
- Gross pay
	- (Normal hours + any overtime) * hourly wage
- Taxes is 15% up to 600 then 20% anything over 
- Net pay
	- Gross pay - taxes
	
Overtime = normal hours * 1.5
Tax = 15% of 600 and optionally 20% of >600
*/

#include <iostream>
using namespace std;

float untaxed_amount(float hours, float hourly_wage);
float tax_amount(float taxable_income);

int main() {
	float net_pay, gross_pay, hourly_wage, total_hours, taxes;
	
	
	cout<<"This program calculates the gross pay, net pay and taxes of your hourly wage."<<endl;
	
	//User input
	cout<<"Enter your hourly wage e.g., for $8/hour enter 8; "<<endl;
	cin>>hourly_wage;
	
	cout<<"Enter total hours worked during the week e.g., for 40 hours enter 40: "<<endl;
	cin>>total_hours;
	
	gross_pay = untaxed_amount(total_hours, hourly_wage);
	cout<<""<<endl;
	cout<<"Your gross pay is $"<<gross_pay<<" for "<<total_hours<<" hours worked this week."<<endl;
	
	taxes = tax_amount(gross_pay);
	cout<<"Your total tax is $"<<taxes<<" for "<<total_hours<<" hours worked this week."<<endl;
	
	net_pay = gross_pay - taxes;
	cout<<"Your net salary is $"<<net_pay<<" for "<<total_hours<<" hours worked this week."<<endl;
	
	
	
}

//Calculates gross pay from total hours and hourly rate
float untaxed_amount(float hours, float hourly_wage) {
	float overtime_hours, total_hours, gross_pay;
	
	if(hours > 40) {
		overtime_hours =(hours - 40) * 1.5;
		total_hours = overtime_hours + 40;
		gross_pay = total_hours * hourly_wage;
		
	}
	else{
		gross_pay = hours * hourly_wage;
		
	}
	
	return gross_pay;
	
}

//Calculates total tax on gross pay
float tax_amount(float taxable_income) {
	float tax_1, tax_2, total_tax, overtaxed_amount;
	if(taxable_income > 600) {
		tax_1 = 0.15 * 600;
		overtaxed_amount = taxable_income - 600;
		
		tax_2 = 0.2 * overtaxed_amount;
		total_tax = tax_1 + tax_2;
	}
	else{
		total_tax = 0.15 * taxable_income;
	}
	
	return total_tax;
	
}

 




