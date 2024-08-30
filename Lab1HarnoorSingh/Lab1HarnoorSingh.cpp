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

	cout << "Hello, World!" << endl;
	
	int day, month, year;
	double aver;
	cout << "hello, \tWorld!\n\n";

	cout << "what is you birth day: ?";
	cin >> day;

	cout << "what is your Birth month: ?";
	cin >> month;

	cout << "what is your birth year: ?";
	cin >> year;
	cout << "your birth date is:" << day
		<< "/" << month << "/" << year << endl;

	int mini, maxi, sumNum, prodNum;

	sumNum = (day + month + year);
	prodNum = (day * month * year);
	aver = (day + month + year) / 3.0;
	cout << "The Sum is:" << sumNum << endl;
	cout << "The Average is:" << aver << endl;
	cout << "The Product is:" << prodNum << endl;
	
	maxi = day;
	if (month > maxi)
		maxi = month;
	if (year > maxi)
		maxi = year;
	cout << "The Max is:" << maxi << endl;

	mini = day;
	if (month < mini)
		mini = month;
	if (year < mini)
		mini = year;
	cout << "The Minimum is:" << mini << endl;
}