#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


void DisplayMenuOptions();
int GetMenuOptions();
int integerPower(int base, int power);
bool isDigits(const string& pin, int size);
void square(int side);

int main() {
    int option;

    do {
        DisplayMenuOptions();
        option = GetMenuOptions();

        switch (option) {
        case 1: {
            cout << "Case 1 is selected" << endl;
            int base, power;

            cout << "Enter the base: ";
            cin >> base;

            cout << "Enter the power: ";
            cin >> power;

            int result = integerPower(base, power);
            cout << base << " raised to the power of " << power << " is: " << result << endl;

            break;
        }
        case 2: {
            cout << "Case 2 is selected" << endl;

            int side;
            cout << "Enter Side: ";
            cin >> side;
            cout << "\n";
            square(side);
            break;
        }
        case 3: {
            cout << "Case 3 is selected" << endl;
            string pin;
            const int pinSize = 5;

            cout << "Enter a PIN with exactly " << pinSize << " characters: ";
            cin >> pin;

            if (isDigits(pin, pinSize)) {
                cout << "The PIN is valid." << endl;
            }
            else {
                cout << "Invalid PIN size. Please enter a PIN with exactly " << pinSize << " characters." << endl;
            }

            break;
        }
        case -1:
            cout << "EXIT is selected" << endl;
            break;
        default:
            cout << "Invalid Entry" << endl;
        } 
    } while (option != -1);

    return 0;
}

void square(int side) {
    for (int i = 0; i < side; ++i) {
        for (int j = 0; j < side; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

void DisplayMenuOptions() {
    cout << " 1: User-Defined Integer Power function" << endl
        << " 2: Squares" << endl
        << " 3: Number of Digits" << endl
        << "-1: Exit" << endl;
}

int GetMenuOptions() {
    int option;
    cout << "Enter your choice: ";
    cin >> option;
    return option;
}

int integerPower(int base, int power) {
    int result = 1;
    for (int i = 0; i < power; ++i) {
        result *= base;
    }
    return result;
}

bool isDigits(const string& pin, int size) {
    return pin.length() == static_cast<size_t>(size);
}
