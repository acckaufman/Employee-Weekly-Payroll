#pragma once
class Payroll
{
private:
	double hourlyPayRate;
	double hoursWorked;
	double totalPay;
public:
	//Default constructor
	Payroll();
	
	//Mutator functions
	void setHourlyPayRate(double r);
	void setHoursWorked(double w);
	void setTotalPay(double p);

	//Accessor functions
	double getTotalPay() const;
	double displayPay() const;

	//Destructor
	~Payroll();
};

