/*
 * Roman.cpp
 *
 *  Created on: 2008-nov-11
 *      Author: wez
 */

#include "Roman.h"

using namespace std;

Roman::Roman(string roman_number) :
	roman_number(roman_number) {
	this->create_roman_table();
	m_instances++;
}

Roman::Roman(unsigned int dec_number) :
	decimal_number(dec_number) {
	this->create_roman_table();
	m_instances++;
}

Roman::~Roman() {
	m_instances--;
}

void Roman::create_roman_table() {
	roman_table.insert(pair<char, int> ('I', 1));
	roman_table.insert(pair<char, int> ('V', 5));
	roman_table.insert(pair<char, int> ('X', 10));
	roman_table.insert(pair<char, int> ('L', 50));
	roman_table.insert(pair<char, int> ('C', 100));
	roman_table.insert(pair<char, int> ('D', 500));
	roman_table.insert(pair<char, int> ('M', 1000));

	roman_convert.insert(pair<int, char> (1, 'I'));
	roman_convert.insert(pair<int, char> (5, 'V'));
	roman_convert.insert(pair<int, char> (10, 'X'));
	roman_convert.insert(pair<int, char> (50, 'L'));
	roman_convert.insert(pair<int, char> (100, 'C'));
	roman_convert.insert(pair<int, char> (500, 'D'));
	roman_convert.insert(pair<int, char> (1000, 'M'));
}

unsigned int Roman::dec() {
	map<char, int>::iterator it;
	int total_sum = 0;
	int roman_length = roman_number.length();

	for (int i = 0; i < roman_length; i++) {
		char next_sign;
		char curr_sign = roman_number[i];

		// if we have reached the end, assign next_sign to '\0'
		if (i < roman_length) {
			next_sign = roman_number[i + 1];
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

string Roman::rom() {
	map<int, char>::reverse_iterator it;
	int dec_number = decimal_number;
	string rom = "";

	for (it = roman_convert.rbegin(); it != roman_convert.rend(); it++) {
		if (dec_number >= it->first) {
			for (int i = 0; i < (dec_number / it->first); i++) {
				rom += it->second;
			}

			dec_number %= it->first;
		}
	}

	return rom;
}
unsigned int Roman::m_instances=0;
unsigned int Roman::count() {
	return m_instances;
}
