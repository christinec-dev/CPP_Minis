#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*calculateCharges Function to calculate the charge per hour*/
double calculateCharges(double hours)
{
	double total;
	/*if it is less than/equal to 3 hours the charge remains R12.00*/
	if (hours <= 3)
		total = 12.00;
	/*if it is more than/equal to 24 hours the charge remains R20.00*/
	else if (hours >= 24)
		total = 20.00;
	/*if it is more than 3 hours the charge of R12.00 gets an additional R0.90 added per hour*/
	else
		total = 12.00 + ceil((hours - 3)) * 0.90;
	return total;
}

/*Function to calculate results based on values entered for three customers*/
int main()
{
	/*Declares variables and sets the initial charge and hours for all three customers at 0*/
	double totalCharge = 0;
	double totalHours = 0;
	double charge;
	double firstCustH , secondCustH , thirdCustH;
	/*Prompt to enter hours for 3 customers and stores values*/
	cout << "Enter the number of hours that all three customers were parked for:" << endl;
	cin >> firstCustH >> secondCustH >> thirdCustH;
	/*Creates tabular format to display results*/
	cout << left << setw(8) << "Car" << setw(8) << right << "Hours"
		<< setw(8) << "Charge" << endl;
	
	/*Calculates the values based on hours entered for first customer and gives output into 'table'*/
	charge = calculateCharges(firstCustH);
	totalCharge += charge;
	totalHours += firstCustH;
	cout << fixed << left << setw(8) << "1" << setw(8) << right << setprecision(1) << firstCustH
		<< setw(8) << setprecision(2) << charge << endl;
	
	/*Calculates the values based on hours entered for second customer and gives output into 'table'*/	charge = calculateCharges(secondCustH);
	totalCharge += charge;
	totalHours += secondCustH;
	cout << fixed << left << setw(8) << "2" << setw(8) << right << setprecision(1) << secondCustH
		<< setw(8) << setprecision(2) << charge << endl;
	
	/*Calculates the values based on hours entered for third customer and gives output into 'table'*/	charge = calculateCharges(thirdCustH);
	totalCharge += charge;
	totalHours += thirdCustH;
	cout << fixed << left << setw(8) << "3" << setw(8) << right << setprecision(1) << thirdCustH
		<< setw(8) << setprecision(2) << charge << endl;
	cout << left << setw(8) << "TOTAL" << setw(8) << right << setprecision(1) << totalHours
		<< setw(8) << setprecision(2) << totalCharge << endl;
}