/*
 * uppg3.cpp
 *
 *  Created on: Nov 26, 2008
 *      Author: seivan
 */

#include <iostream>
#include <cstdlib>

using namespace std;


int main() {
	string input;
	string multiple_numerals;
	int sum = 0;

	getline(cin, input);

	for (unsigned int i = 0; i < input.length(); i++) {
		while (isdigit(input[i])) {
			multiple_numerals += input[i];
			i++;
		}

		sum += atoi(multiple_numerals.c_str());
		multiple_numerals = "";
	}

	cout << sum << endl;
}
