/* 
Author: Jonah Mochori.
Reg No: BSE-01-0007/2025
Description: Program uses classes to calculate volume and area of a cylinder.
Date: 12/06/2025
Version 1
*/

/* Write a C++ Program that will implement a class named cylinder with three
data members: radius and height and two member functions to determine and output
the surface area and volume of the cylinder;

volume = Pr2h
surface area = 2Pr2 + 2Prh

STEPS:
Implements a class 
- 2 data members
- 2 member functions surface area and volume

Outputs the area and volume

*/

#include <iostream>
//#include <cmath>
using namespace std;

const double pi = 3.142;


//Class
class Cylinder{
	public:  // By default it is private, empty identifier means private
		double radius, height;
		
		float cylinder_surface_area(){
			
			return (2 * pi * radius * radius) + (2 * pi * height);
		}
		
		float cylinder_volume() {
			
			return pi * radius * radius * height; // or pow(radius, 2) and pi
		}
			
};

int main(){
	Cylinder container;
	float surface_area, volume;
	
	cout<<"This program calculates surface area and volume of a cylinder."<<endl;
	
	//Enter radius and height
	cout<<"Enter the radius and height of the cylinder: "<<endl;
	cin>>container.radius>>container.height;
	
	//Calculate surface area and volume of cylinder
	surface_area = container.cylinder_surface_area();
	volume = container.cylinder_volume();
	
	//Display area to user
	cout<<""<<endl;
	cout<<"The surface area of the cylinder is: "<<surface_area<<" cm2"<<endl;
	cout<<"The volume of the cylinder is: "<<volume<<" cm3"<<endl;
	
	return 0;
}