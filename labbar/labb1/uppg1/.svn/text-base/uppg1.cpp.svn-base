/*
 * uppg1.cpp
 *
 *  Created on: Nov 3, 2008
 *      Author: seivan
 */

#include <iostream>
using namespace std;

int main() {
	int startInt, endInt;
	cout << "Write a start number and an end number" << endl;
	cin >> startInt >> endInt;

	if (startInt < endInt && (startInt < 1 || endInt < 1)) {
		cout << "Input error!" << endl;
		return -1;
	}

	for (startInt; startInt <= endInt; startInt++) {
		if (startInt % 2 == 0 && (startInt % 3 == 0 || startInt % 5 == 0)) {
				cout << startInt << " ";
			}
	}
}
