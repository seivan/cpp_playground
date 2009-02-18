/*
 * Operator_Handler.cpp
 *
 *  Created on: Dec 10, 2008
 *      Author: seivan
 */

#include "Operator_Handler.h"
#include <map>
#include <string>
using namespace std;

Operator_Handler::Operator_Handler() {
	this->create_table();
}

Operator_Handler::~Operator_Handler() {

}

bool Operator_Handler::is_of_type(const std::string& token) {
	iter = operator_table.find(token);
	if (iter != operator_table.end()) {
		return true;
	} else {
		return false;
	}
}

void Operator_Handler::create_table() {
	operator_table.insert(pair<std::string, int> ("+", 1));
	operator_table.insert(pair<std::string, int> ("-", 1));
	operator_table.insert(pair<std::string, int> ("*", 2));
	operator_table.insert(pair<std::string, int> ("/", 2));
}

int Operator_Handler::get_priority(const std::string& token) {
	iter = operator_table.find(token);
	if (iter != operator_table.end()) {
		return iter->second;
	}
	return 0;
}

