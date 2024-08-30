#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int NROWS = 6;
const int NCOLS = 5;

enum carType { GM, FORD, TOYOTA, BMW, NISSAN, VOLVO };
enum salesPerson { RICK, JIM, JOE, LIZ, ED };

void printMatrix(int matrix[][NCOLS], int noOfRows);
void sumRows(int matrix[][NCOLS], int NROWS, int sumRowsArray[]);
void sumCols(int matrix[][NCOLS], int NROWS, int sumColsArray[]);
void salesByPerson(int array1[NCOLS], int array2[NCOLS], int array3[]);
int arrayMultip(int a[], int b[]);
int maxRArray(int myArray[], int);
int maxCArray(int my2Array[], int);
int findCarLoc(int array[NROWS], int rowmax);
int findPersonLoc(int array[NCOLS], int colmax);
string findCarType(int locindex);
string findPersonType(int locindex);

int main() {
    int maxrow, maxcol, totalSales, loc;
    string cType, pType;

    int soldInYear[NROWS][NCOLS] = {
        {20, 15, 20, 14, 33},
        {30, 55, 44, 11, 10},
        {19, 56, 23, 22, 35},
        {45, 30, 22, 55, 60},
        {12, 25, 23, 26, 25},
        {24, 60, 50, 51, 40}
    };

    int commission[NCOLS] = { 100, 150, 200, 125, 100 };
    int carPrice[NROWS] = { 18000, 20000, 21500, 35000, 17500, 30000 };

    // Task 1: Print the matrix
    cout << "Matrix:" << endl;
    printMatrix(soldInYear, NROWS);

    // Task 2: Calculate sum of rows and columns
    int sumRowsArray[NROWS];
    int sumColsArray[NCOLS];
    sumRows(soldInYear, NROWS, sumRowsArray);
    sumCols(soldInYear, NROWS, sumColsArray);

    // Task 3: Find the maximum values in the sum of rows and columns
    maxrow = maxRArray(sumRowsArray, NROWS);
    maxcol = maxCArray(sumColsArray, NCOLS);

    // Task 4: Use matrix multiplications/additions to answer some questions
    totalSales = arrayMultip(carPrice, sumRowsArray);

    // Task 5: Relate the location of maximum values to strings
    loc = findCarLoc(sumRowsArray, maxrow);
    cType = findCarType(loc);

    loc = findPersonLoc(sumColsArray, maxcol);
    pType = findPersonType(loc);

    // Display results
    cout << "The greatest number of cars sold: " << maxrow << ", Location: " << loc << ", Car Type: " << cType << endl;
    cout << "The greatest number of sales by salesman: " << maxcol << ", Location: " << loc << ", Salesman: " << pType << endl;
    cout << "Total Sales amount for the last year: $" << totalSales << endl;

    // Task 6: Display sales commission for each salesperson
    salesByPerson(commission, sumColsArray, sumRowsArray);

    return 0;
}

void printMatrix(int matrix[][NCOLS], int noOfRows) {
    for (int i = 0; i < noOfRows; i++) {
        for (int j = 0; j < NCOLS; j++) {
            cout << setw(4) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void sumRows(int matrix[][NCOLS], int NROWS, int sumRowsArray[]) {
    for (int i = 0; i < NROWS; i++) {
        int sum = 0;
        for (int j = 0; j < NCOLS; j++) {
            sum += matrix[i][j];
        }
        sumRowsArray[i] = sum;
        cout << "Sum of row " << i << " = " << sum << endl;
    }
}

void sumCols(int matrix[][NCOLS], int NROWS, int sumColsArray[]) {
    for (int j = 0; j < NCOLS; j++) {
        int sum = 0;
        for (int i = 0; i < NROWS; i++) {
            sum += matrix[i][j];
        }
        sumColsArray[j] = sum;
        cout << "Sum of column " << j << " = " << sum << endl;
    }
}

void salesByPerson(int array1[NCOLS], int array2[NCOLS], int array3[]) {
    for (int i = 0; i < NCOLS; i++) {
        cout << "sales commission by ";
        switch (i) {
        case RICK:
            cout << "RICK is $" << array1[i] * array2[i] << endl;
            break;
        case JIM:
            cout << "JIM is $" << array1[i] * array2[i] << endl;
            break;
        case JOE:
            cout << "JOE is $" << array1[i] * array2[i] << endl;
            break;
        case LIZ:
            cout << "LIZ is $" << array1[i] * array2[i] << endl;
            break;
        case ED:
            cout << "ED is $" << array1[i] * array2[i] << endl;
            break;
        }
    }
}

int arrayMultip(int a[], int b[]) {
    int result = 0;
    for (int i = 0; i < NROWS; i++) {
        result += a[i] * b[i];
    }
    return result;
}

int maxRArray(int myArray[], int size) {
    int max = myArray[0];
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (myArray[i] > max) {
            max = myArray[i];
            index = i;
        }
    }
    return max;
}

int maxCArray(int my2Array[], int size) {
    int max = my2Array[0];
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (my2Array[i] > max) {
            max = my2Array[i];
            index = i;
        }
    }
    return max;
}

int findCarLoc(int array[NROWS], int rowmax) {
    for (int i = 0; i < NROWS; i++) {
        if (array[i] == rowmax) {
            return i;
        }
    }
    return -1;
}

int findPersonLoc(int array[NCOLS], int colmax) {
    for (int i = 0; i < NCOLS; i++) {
        if (array[i] == colmax) {
            return i;
        }
    }
    return -1;
}

string findCarType(int locindex) {
    switch (locindex) {
    case GM:
        return "GM";
    case FORD:
        return "FORD";
    case TOYOTA:
        return "TOYOTA";
    case BMW:
        return "BMW";
    case NISSAN:
        return "NISSAN";
    case VOLVO:
        return "VOLVO";
    default:
        return "Unknown";
    }
}

string findPersonType(int locindex) {
    switch (locindex) {
    case RICK:
        return "RICK";
    case JIM:
        return "JIM";
    case JOE:
        return "JOE";
    case LIZ:
        return "LIZ";
    case ED:
        return "ED";
    default:
        return "Unknown";
    }
}

