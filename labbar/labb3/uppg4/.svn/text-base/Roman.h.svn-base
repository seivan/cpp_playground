/*
 * Roman.h
 *
 *  Created on: 2008-nov-11
 *      Author: wez
 */

#include <iostream>
#include <map>
using namespace std;

#ifndef ROMAN_H_
#define ROMAN_H_

static int m_instances;

class Roman {
private:
	map<char, int> roman_table;
	map<int, char> roman_convert;
	unsigned int decimal_number;
	string roman_number;
public:
	unsigned int dec();
	string rom();

	unsigned int count();
	void create_roman_table();

	Roman(string roman_number);
	Roman(unsigned int dec_number);
	~Roman();

};

#endif /* ROMAN_H_ */
