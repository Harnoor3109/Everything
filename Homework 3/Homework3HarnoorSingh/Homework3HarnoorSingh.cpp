// Homework3HarnoorSingh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
    int N = 1; 

    
    cout << "N\t10*N\t100*N\t1000*N" << endl;

   
    while (N <= 5) {
        
        int times10 = N * 10;
        int times100 = N * 100;
        int times1000 = N * 1000;
       
        cout << N << "\t" << times10 << "\t" << times100 << "\t" << times1000 << endl;

        N++;
    }

    return 0;
}