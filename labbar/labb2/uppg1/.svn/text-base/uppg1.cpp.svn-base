/*
 * uppg1.cpp
 *
 *  Created on: 2008-nov-10
 *      Author: wez
 */

#include <iostream>
#include <map>
using namespace std;

map<char,int> roman_table;

int getValue(string roman_sign);

int main() {
	int total_value = 0;
	char roman_sign;
	string roman_number;

	roman_table.insert(pair<char,int>('I', 1));
	roman_table.insert(pair<char,int>('V', 5));
	roman_table.insert(pair<char,int>('X', 10));
	roman_table.insert(pair<char,int>('L', 50));
	roman_table.insert(pair<char,int>('C', 100));
	roman_table.insert(pair<char,int>('D', 500));
	roman_table.insert(pair<char,int>('M', 1000));

	while ((roman_sign = cin.get())) {
		if (roman_sign == '\n')
			break;

		roman_number += roman_sign;
	}

	total_value = getValue(roman_number);
	cout << total_value << endl;

	return 0;
}

int getValue(string roman_sign) {
	map<char,int>::iterator it;
	int total_sum = 0;
	int roman_length = roman_sign.length();

	for (int i = 0; i < roman_length; i++) {
		char next_sign;
		char curr_sign = roman_sign[i];

		// if we have reached the end, assign next_sign to '\0'
		if (i < roman_length) {
			next_sign = roman_sign[i + 1];
		} else {
			next_sign = '\0';
		}

		it = roman_table.find(curr_sign);
		int curr_value = it->second;
		int next_value = 0;

		if (next_sign != '\0') {
			it = roman_table.find(next_sign);
			next_value = it->second;
		}

		if (curr_value < next_value) {
			total_sum -= curr_value;
		} else {
			total_sum += curr_value;
		}
	}

	return total_sum;
}
