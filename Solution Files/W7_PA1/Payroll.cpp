#include "Payroll.h"
using namespace std;

//Default constructor
Payroll::Payroll()
{
	hourlyPayRate = 0;
	hoursWorked = 0;
	totalPay = 0;
}

//Mutator functions
void Payroll::setHourlyPayRate(double r)
{
	hourlyPayRate = r;
}

void Payroll::setHoursWorked(double w)
{
	hoursWorked = w;
}

void Payroll::setTotalPay(double p)
{
	totalPay = p;
}

//Accessor functions
double Payroll::getTotalPay() const
{
	return (hourlyPayRate * hoursWorked);
}

//Redundant accessor function to meet assignment requirements
double Payroll::displayPay() const
{
	return totalPay;
}

//Destructor
Payroll::~Payroll()
{
}
