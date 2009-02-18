/*
 * uppg1.cpp
 *
 *  Created on: 2008-nov-10
 *      Author: wez
 */

#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<char,int> roman_table;

int getValue(string roman_sign);
bool isValidRomanString(string roman_string);
bool firstLessThan(const string& left,
					const string& right);

int main() {
	vector<string> roman_numbers;
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
		if (roman_sign == '\n') {
			if (isValidRomanString(roman_number)) {
				roman_numbers.push_back(roman_number);
				roman_number = "";
				continue;
			} else {
				break;
			}
		} else if (roman_sign == 'q') {
			break;
		}

		roman_number += roman_sign;
	}

	sort(roman_numbers.begin(), roman_numbers.end(), firstLessThan);

	cout << "Sorterade tal:" << endl << "----------------" << endl;
	vector<string>::iterator it;
	for (it = roman_numbers.begin(); it != roman_numbers.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}

bool firstLessThan(const string& left,
					const string& right) {
	return getValue(left) < getValue(right);
}

bool isValidRomanString(string roman_string) {
	int roman_size = roman_string.size();// - 1;	// remove 1 to skip the \n sign
	bool isValid = false;
	map<char,int>::iterator it;

	for (int i = 0; i < roman_size; i++) {
		it = roman_table.find(roman_string[i]);
		cout << roman_string[i] << "    " << it->second << endl;

		if (it->second == 0) {
			isValid = false;
			cout << it->second << endl;
			break;
		} else {
			isValid = true;
		}
	}
	return isValid;
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
