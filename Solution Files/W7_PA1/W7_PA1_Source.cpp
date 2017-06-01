#include <iostream>
#include <iomanip>
#include "Payroll.h"
using namespace std;

int main()
{
	const int ARRAY_SIZE = 7;		//Set constant array size
	Payroll payroll[ARRAY_SIZE];	//Declare an array of 7 Payroll objects

	//Initialize the pay rates for each employee prior to asking the user for the number of hours worked
	//per assignment requirements

	payroll[0].setHourlyPayRate(7.65);		//Employee #1
	payroll[1].setHourlyPayRate(8.05);		//Employee #2
	payroll[2].setHourlyPayRate(6.25);		//Employee #3
	payroll[3].setHourlyPayRate(13.25);		//Employee #4
	payroll[4].setHourlyPayRate(12.70);		//Employee #5
	payroll[5].setHourlyPayRate(9.50);		//Employee #6
	payroll[6].setHourlyPayRate(10.40);		//Employee #7

	//Now, for each employee, ask the user to input the number of hours worked.
	cout << "Please input the number of hours worked this week by each employee." << endl;
	for (int index = 0; index < ARRAY_SIZE; index++)
	{
		double temp = 0;		//To hold the number of hours each employee worked
		cout << "Employee #" << (index + 1) << ": ";
		cin >> temp;

		//Validate the input per assignment requirements: no negative numbers or values greater than 60
		while (temp < 0 || temp > 60)
		{
			cout << "Error!  You must input a value betweeen 0 and 60.  Please try again." << endl;
			cout << "Employee #" << (index + 1) << ": ";
			cin >> temp;
		}

		//Use the Payroll member function to store the user's input as number of hours worked by the employee
		payroll[index].setHoursWorked(temp);
	}

	//Now that all pay rates and hours worked have been set, calculate the total pay for each employee,
	//and store the value in the totalPay attribute for each employee
	//Note: This step could lead to stale data in real life, would prefer to avoid and just use the getTotalPay
	//member function to calculate the figure when needed
	for (int index = 0; index < ARRAY_SIZE; index++)
	{
		double tempPay;
		tempPay = payroll[index].getTotalPay();
		payroll[index].setTotalPay(tempPay);
	}
	
	
	//Display the total weekly pay for each employee, using the second accessor function displayPay(),
	//which retreives the stored data member rather than returning a calculation
	cout << endl << endl;
	cout << "Total Weekly Pay by Employee: " << endl << endl;
	cout << setw(12) << left << "Employee #" << setw(18) << left << "Weekly Pay" << endl;
	cout << "------------------------------" << endl;

	for (int count = 0; count < ARRAY_SIZE; count++)
	{
		//Set output formatting
		cout << fixed << showpoint << setprecision(2)
			<< setw(12) << left << (count + 1)
			<< setw(1) << left << "$" << setw(8) << right
			<< payroll[count].displayPay() << endl;
	}
	cout << endl << endl;

	system("pause");
	return 0;
}