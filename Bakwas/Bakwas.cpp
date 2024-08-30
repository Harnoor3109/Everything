#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int temp[5];

	for (int i = 0; i < 5; i++)
		temp[i] = static_cast<int>(pow(i, 2.0));

	for (int i = 0; i < 5; i++)\
		cout << temp[i] << " ";
	cout << endl;

	temp[4] = temp[3] * temp[2];
	temp[3] = temp[4] - temp[2];
	temp[0] = temp[5] / temp[1];

	for (int i = 0; i < 5; i++)
		cout << temp[i] << " ";
	cout << endl;

}