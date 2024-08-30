// ----------------------------------------------------------------------------
// Name: Harnoo Singh, CST 127
// Program: Lab #3,
// Due Date: 9/28/2023
//
// Program Description: obtain the grade and letter grade with class average and total
// and the factorial of the integer
//
// Inputs: grade and non-negative integers
//
// Outputs: grade and letter grade with class average and total
// and the factorial of the integer
//
// ---------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//int final;
	//cout << "\nWhat is the final accumulated grade: ";
	//cin >> final;

	//if (final >= 90) {
	//	cout << "\n The letter grade for this course is:\t A \n";
	//}
	//else if (final >= 80) {
	//	cout << "\n The Letter Grade for this Course is:\t B \n";
	//}
	//else if (final >= 70) {
	//	cout << "\n The Letter Grade for this Course is:\t C \n";
	//}
	//else if (final >= 60) {
	//	cout << "\n The Letter Grade for this Course is:\t D \n";
	//}
	//else {
	//	cout << "\n The Letter Grade for this Course is:\t F \n";
	//}
	int loopCount, total, grade;
	double average;
	total = 0;
	loopCount = 1;
	while (loopCount <= 7)
	{
		cout << "Enter your grade:  ";
		cin >> grade;
		if (grade >= 90) {
			cout << "\n Your grade is: "<<grade<< " letter grade is:\tA \n";
		}
		else if (grade >= 80) {
			cout << "\n Your grade is: " << grade << " letter grade is:\tB \n";
		}
		else if (grade >= 70) {
			cout << "\n Your grade is: " << grade << " letter grade is:\tC \n";
		}
		else if (grade >= 60) {
			cout << "\n Your grade is: " << grade << " letter grade is:\tD \n";
		}
		else {
			cout << "\n Your grade is: " << grade << " letter grade is:\tF \n";
		}
		loopCount++;
		total += grade;
		cout << "\n";
	}
	average = static_cast<double>(total / 7);
	cout << "\nClass Average is: " << fixed << showpoint << setprecision(2) << average;
	cout << "\nClass Total is: " << total;

	int n;
	unsigned long long factorial = 1; 

	cout << "Enter a non-negative integer: ";
	cin >> n;
	int i = 1;
	while (i <= n) {
		factorial *= i;
		i++;
	}

	cout << n << "! = " << factorial << std::endl;

}