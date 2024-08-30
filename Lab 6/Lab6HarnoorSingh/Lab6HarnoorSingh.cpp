// ----------------------------------------------------------------------------
// Name: Harnoor Singh, CST 127
// Program: Lab #6
// Due Date: 11/3/2023
//
// Program Description: grade average and letter
//
// Inputs:grade.txt file
//
// Outputs: output.txt file
//
// ----------------------------------------------------------------------------


#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// Constants for percentage weights
const double TEST_PERCENTAGE = 0.30;
const double HOMEWORK_PERCENTAGE = 0.30;
const double LAB_PERCENTAGE = 0.40;

// Function declarations
double GetTestAverage(double test1, double test2, double test3);
double GetLabAverage(double lab1, double lab2, double lab3, double lab4, double lab5, double lab6, double lab7, double lab8);
double GetHomeworkAverage(double Hw1, double Hw2, double Hw3, double Hw4, double Hw5, double Hw6, double Hw7);
double GetOverallPercent(double testAvg, double labAvg, double HomeworkAvg);
char DetermineLetterGrade(double overallPercent);

int main() {
    // Input and output file streams
    ifstream inData("D:/CST127/LAB/Lab 6/Lab6HarnoorSingh/grades.txt");

    // Check if input file is open
    if (!inData.is_open()) {
        cerr << "Error: Unable to open the input file." << endl;
        return 1;
    }

    // Output file stream
    ofstream outData("output.txt");

    // Display message
    cout << "Processing data from grades.txt..." << endl;

    // Output file header with setw for formatting
    outData << setw(20) << left << "Student Name" << setw(15) << right << "Overall %" << setw(10) << right << "Letter Grade" << endl;

    string firstName, lastName;
    double test1, test2, test3, lab1, lab2, lab3, lab4, lab5, lab6, lab7, lab8, Hw1, Hw2, Hw3, Hw4, Hw5, Hw6, Hw7;

    // Loop through data in the input file
    while (inData >> firstName >> lastName >> test1 >> test2 >> test3 >> lab1 >> lab2 >> lab3 >> lab4 >> lab5 >> lab6 >> lab7 >> lab8 >> Hw1 >> Hw2 >> Hw3 >> Hw4 >> Hw5 >> Hw6 >> Hw7) {
        // Concatenate first and last name
        string fullName = lastName + ", " + firstName;

        // Calculate averages and overall percentage
        double testAvg = GetTestAverage(test1, test2, test3);
        double labAvg = GetLabAverage(lab1, lab2, lab3, lab4, lab5, lab6, lab7, lab8);
        double HomeworkAvg = GetHomeworkAverage(Hw1, Hw2, Hw3, Hw4, Hw5, Hw6, Hw7);
        double overallPercent = GetOverallPercent(testAvg, labAvg, HomeworkAvg);

        // Determine letter grade
        char letterGrade = DetermineLetterGrade(overallPercent);

        // Output formatted data to console
        cout << setw(20) << left << fullName << setw(15) << right << fixed << setprecision(2) << overallPercent << setw(10) << right << letterGrade << endl;

        // Output formatted data to output file
        outData << setw(20) << left << fullName << setw(15) << right << fixed << setprecision(2) << overallPercent << setw(10) << right << letterGrade << endl;
    }

    // Close file streams
    inData.close();
    outData.close();

    // Display completion message
    cout << "Data processed successfully. Check output.txt for results." << endl;

    return 0;
}

// Function to calculate test average
double GetTestAverage(double test1, double test2, double test3) {
    return (test1 + test2 + test3) / 3.0;
}

// Function to calculate lab average
double GetLabAverage(double lab1, double lab2, double lab3, double lab4, double lab5, double lab6, double lab7, double lab8) {
    return (lab1 + lab2 + lab3 + lab4 + lab5 + lab6 + lab7 + lab8) / 8.0;
}

// Function to calculate homework average
double GetHomeworkAverage(double Hw1, double Hw2, double Hw3, double Hw4, double Hw5, double Hw6, double Hw7) {
    return (Hw1 + Hw2 + Hw3 + Hw4 + Hw5 + Hw6 + Hw7) / 7.0;
}

// Function to calculate overall percentage
double GetOverallPercent(double testAvg, double labAvg, double HomeworkAvg) {
    return (testAvg * TEST_PERCENTAGE + labAvg * LAB_PERCENTAGE + HomeworkAvg * HOMEWORK_PERCENTAGE);
}

// Function to determine letter grade
char DetermineLetterGrade(double overallPercent) {
    if (overallPercent >= 90.0) {
        return 'A';
    }
    else if (overallPercent >= 80.0) {
        return 'B';
    }
    else if (overallPercent >= 70.0) {
        return 'C';
    }
    else if (overallPercent >= 60.0) {
        return 'D';
    }
    else {
        return 'F';
    }
}
