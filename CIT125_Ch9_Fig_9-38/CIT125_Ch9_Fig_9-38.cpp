// CIT125_Ch9_Fig_9-38.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Intro To C++ Luigi Robles
// 07-14-2020 Summer Term
// Ch.9 Exercise Number 17 Employee Gross Pay Program

#include <iostream>
using namespace std;

double getGrossPay(int a, int b); //function prototype

int main()
{
	int hoursWorked = 0;
	int payRate = 0;
	int grosspay = 0;

	cout << "Please enter the number of hours employee worked or a negative number to quit: " << endl;
	cin >> hoursWorked;

	while (hoursWorked > 0)
		cout << "Please enter the employee's pay rate: " << endl;
		cin >> payRate;

		grosspay = getGrossPay(payRate * hoursWorked);
		cout << "This employee's gross pay is: " << grosspay << endl;
}


