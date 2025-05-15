// This program calculates the sum of 2 numbers

#include <iostream>
using namespace std;

int main() {
	float num_1, num_2, total;
	cout<<"This program calculates the sum of 2 numbers." <<endl;
	cout<<"Enter the 2 numbers: ";
	cin>>num_1 >> num_2;
	total = num_1 + num_2;
	cout<<"The total is "<<total;
	return 0;
}