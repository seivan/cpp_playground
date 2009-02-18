/*
 * Roman.h
 *
 *  Created on: 2008-nov-11
 *      Author: wez
 */

#include <iostream>
#include <map>

#ifndef ROMAN_H_
#define ROMAN_H_



class Roman {
private:
	std::map<char, int> roman_table;
	std::map<int, char> roman_convert;
	unsigned int decimal_number;
	std::string roman_number;
	static unsigned int m_instances;

public:

	unsigned int dec();
	std::string rom();

	unsigned int count();
	void create_roman_table();

	Roman(std::string roman_number);
	Roman(unsigned int dec_number);
	~Roman();

};

#endif /* ROMAN_H_ */
