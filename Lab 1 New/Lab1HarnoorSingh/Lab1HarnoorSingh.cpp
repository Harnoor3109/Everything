// ----------------------------------------------------------------------------
// Name: Harnoor Singh, CST 127
// Program: Lab #1
// Due Date: 9/7/2023
//
// Program Description: This program states hello world, and then asks your brithdate info and gives your birthday,
// then gives the sum, average, product, maximum, and minimum.
//
// Inputs: Your Birth Date Data
//
// Outputs: your birth date in the dd/mo/yyyy format and the sum, average, and product of your birth date data and the smallest and largest of 3 data points.
//
// ----------------------------------------------------------------------------

#include <iostream> 
using namespace std;
int main(void)
{
	int day, month, year;
	double aver;
	cout << "Hello, \tWorld!\n\n";							// This Function states hello world as first line

	cout << "what is you birth day: ?";						// Function asks for the users day of birth
	cin >> day;												// this allows user to enter day of birth

	cout << "what is your Birth month: ?";					// Function asks for the users month of birth
	cin >> month;											// this allows user to enter month of birth

	cout << "what is your birth year: ?";				 //Function asks for the users year of birth
	cin >> year;										// this allows user to enter year of birth
	cout << "your birth date is:" << day
		<< "/" << month << "/" << year << endl;				//states the users birthday in day/month/year

	int mini, maxi, sumNum, prodNum;						//this names are integers

	sumNum = (day + month + year);						// makes sumNum into a function that add them together
	prodNum = (day * month * year);						// makes prodNum into a function that multiply them together
	aver = (day + month + year) / 3.0;					// makes aver into a function that gets the average
	cout << "The Sum is:" << sumNum << endl;			//these state the sum, average, and the product
	cout << "The Average is:" << aver << endl;
	cout << "The Product is:" << prodNum << endl;

	maxi = day;											//starts the if function that goes through the numbers entered and finds the maximum
	if (month > maxi)
		maxi = month;
	if (year > maxi)
		maxi = year;
	cout << "The Max is:" << maxi << endl;				//states the max

	mini = day;											//starts the if function that goes through the numbers entered and finds the minimum
	if (month < mini)
		mini = month;
	if (year < mini)
		mini = year;
	cout << "The Minimum is:" << mini << endl;				//states the minimum
}