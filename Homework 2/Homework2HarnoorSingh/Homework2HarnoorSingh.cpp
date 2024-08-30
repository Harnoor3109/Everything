#include <iostream>
#include <iomanip> 
using namespace std;

const double PI = 3.14159;

int main() {

    int radius;
    cout << "Enter the radius: ";
    cin >> radius;


    double diameter = 2.0 * radius;
    double circumference = 2.0 * PI * radius;
    double area = PI * radius * radius;


    cout << "Diameter: " << static_cast<int>(diameter) << endl;
    cout << fixed << setprecision(2);
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;

    return 0;
}



int main() {

    int counter = 1;
    int number;
    int largest;


    cout << "Enter number " << counter << ": ";
    cin >> number;
    largest = number;


    while (counter < 10) {

        cout << "Enter number " << counter + 1 << ": ";
        cin >> number;


        if (number > largest) {
            largest = number;
        }


        counter++;
    }


    cout << "The largest is: " << largest << endl;

    return 0;
}
