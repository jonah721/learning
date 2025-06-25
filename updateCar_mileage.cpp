/* 
Author: Jonah Mochori.
Reg No: BSE-01-0007/2025
Description: Program simulates driving a car and updating the total mileage covered.
Date: 18/06/2025
Version 1
*/

/*Write a C++ program that will carry out the following:
i) Define a class named Car. 
ii) The class should have private data members to store the following:
	- brand: the car brand(string)
	- model: the model of the car(string)
	- price: the price of the car(float)
	- mileage: the mileage of the car(int)
	
iii) Provide a constructor to initialize these data members when a Car
object is created.
iv) Define a public member function named display that prints the details of the
car(brand, model, price and mileage).
v) Define another public member function named drive that accepts an integer
parameter representing the distance given. The function should increase the 
mileage by that amount and display the updated mileage.
vi) In the main() function, create a Car object with the following details:
	- brand = "Toyota"
	- model = "Corolla"
	- price = 20,000
	- mileage = 5000
	
vii) Use the display function to show the car's details
viii) Simulate driving the car for 150 miles using the drive function and display
the updated mileage.
ix) Simulate driving the car for 300 miles and display the updated mileage.
*/

#include <iostream>
#include <string> 
using namespace std;

class Car{
	private:
		string brand;
		string model;
		float price;
		int mileage;
		string info;
		
    public:  //Constructor
    
    	Car(string b, string mo, float p, int m) {
			brand = b;
			model = mo;
			price = p;
			mileage = m;
			 
		}
		
		//Member functions
		void display() {
			cout<<"Brand: "<<brand<<endl;
			cout<<"Model: "<<model<<endl;
			cout<<"Price: "<<price<<endl;
			cout<<"Mileage: "<<mileage<<endl;
			cout<<""<<endl;
        }
		// Driving simulation
		int drive(int d) {
			mileage += d;  // update mileage of car
			//To_string method used here works for C++11 and above only. Falcon cannot compile it.
			info = "Updated mileage covered by "+brand+" "+model+" "+"is "+ to_string(mileage)+" miles.\n";
			cout<<info<<endl;
			return 0;
		}

	    ~Car() {
			cout<<"Constructor instance --object memory is cleared!"<<endl;
		}
};

int main(){
	Car carObj("Toyota", "Corolla", 20000, 5000);
	
	//Display car details
	carObj.display();
	
	//Drive 150 miles and display updated mileage
	cout<<"Driving for 150 miles..."<<endl;
	carObj.drive(150);
	 
	// Drive 300 miles and display updated mileage
	cout<<"Driving for 300 miles..."<<endl;
	carObj.drive(300);
	 
	
	
	return 0;
}

