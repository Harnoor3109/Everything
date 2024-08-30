// ----------------------------------------------------------------------------
// Name: Harnoor Singh, CST 127
// Program: Lab #2,
// Due Date: 9/19/2023
//
// Program Description: Solve Two formulas using code
//
// Inputs: 100, 200, 100
//
// Outputs: 1.33e-07, 7.04907
//
// ---------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(void)
{
	double Mass1, Mass2, Distance, f;			//large number variables
	int MassCalc, DistanceCalc, InsideCalc, height;			//activate as integers
	double insideCalc2, insideCalc3;
	double const k = 6.67e-8;			//activate k as a constant
	double const gravity = 32.2;		// gravity as a constant
	double time;
	height = 800;		//set value for height
	cout << fixed << showpoint << setprecision(2);		//precison of number out to 2 decimal points
	
	cout << "\n What is the mass of two bodies? Enter simultaneously two values in grams: ";
	cin >> Mass1 >> Mass2;				//ask for two masses

	cout << "\n What is the distance between two bodies in cm? ";
	cin >> Distance;			//ask for the distince

	MassCalc = Mass1 * Mass2;
	DistanceCalc = Distance* Distance;
	InsideCalc = MassCalc / DistanceCalc;
	f = k * InsideCalc;
	cout << "\n Force between " << Mass1 << " gr and " << Mass2 << " gr at the distance of " << Distance << " cm is: " << scientific << f << endl;
	
	cout << fixed << showpoint << setprecision(5);			//precision for answer

	insideCalc2 = height / gravity;
	insideCalc3 = 2 * insideCalc2;
	time = sqrt(insideCalc3);
	cout << "\n\n It will take " << time << " seconds to fall 800 feet.\n\n";		//state the answer
}