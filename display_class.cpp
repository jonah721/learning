/* 
Author: Jonah Mochori.
Reg No: BSE-01-0007/2025
Description: Program used class to display user details
Date: 12/06/2025
Version 1
*/

/*
Write a class named employee that instantiates a zu emp object from the class
you created. Declare the following data members: idno, name, occupation. Prompt a
user to enter personal detais such as idno, name, occupation and then create a 
method named display to display all the values entered by the user.
*/

/*
STEPS:
Declare a class named: employee
- has object called zu_emp
Data members:
- idno, name, occupation
Method: display

*/

#include <iostream>
#include <string>
using namespace std;

//Class
class Employee{
	public: 
		int idno;
		string name, occupation;
		
		//Display method
		int display(){
			cout<<""<<endl;
			cout<<"Your ID number is: "<<idno<<"\nName: "<<name<<"\nOccupation: "<<occupation<<endl;
			
			return 0;
		}

};

int main(){
	Employee zu_emp;
	
	//User input
	cout<<"Write you ID number, name and occupation: "<<endl;
	cin>>zu_emp.idno>>zu_emp.name>>zu_emp.occupation;
	
	//Display details
	zu_emp.display();
	
	return 0;
}
