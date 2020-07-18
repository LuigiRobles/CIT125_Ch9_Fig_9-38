// CIT125_Ch9_Fig_9-38.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Intro To C++ Luigi Robles
// 07-14-2020 Summer Term
// Ch.9 Exercise Number 17 Employee Gross Pay Program

#include <iostream>
using namespace std;

double getGrossPay(double a, double b); //function prototype
int main()
{
	//declare and initialize variables
	double hoursWorked = 0.0;
	double payRate = 0.0;
	double grossPay = 0.0;
	const int regularHours = 37;
	double OverTimeHours = 0.0;
	double DoubleTimeHours = 0.0;
	
	//priming while loop
	//input part of IPO
	cout << "Enter the hours worked or a negative number to quit: "; 
	cin >> hoursWorked;

	//while loop
	while (hoursWorked >= 0)
	{
		cout << "Enter the pay rate: ";
		cin >> payRate;

		if (hoursWorked <= 37)
		{
			grossPay = getGrossPay(hoursWorked, payRate); //regular pay for hours 37 or less
		}
		else
			if (hoursWorked >= 38 && hoursWorked <= 50)
			{
				OverTimeHours = (hoursWorked - regularHours);
				grossPay = getGrossPay(regularHours, payRate) + getGrossPay(OverTimeHours,payRate)* 1.5; //time and one-half for hours 38 - 50
			}
			else
				if (hoursWorked > 50)
				{
					OverTimeHours = (13);
					DoubleTimeHours = (hoursWorked - OverTimeHours - regularHours);
					grossPay = getGrossPay(regularHours, payRate) + getGrossPay(OverTimeHours, payRate )* 1.5 + getGrossPay(DoubleTimeHours,payRate)*2; //double-time for hours over 50
				} //end of nested if statements
		
		cout << "This employee's gross pay is: " << grossPay << endl;
		cout << "Enter the hours worked or a negative number to quit: ";
		cin >> hoursWorked;
	} //end while loop

	cout << "User has exited the program... Goodbye."; 
}	//end main function

//function definition
double getGrossPay(double a, double b)
{
	double r;
	r = a * b;
	return r;
}
