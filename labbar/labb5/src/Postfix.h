/*
 * Postfix.h
 *
 *  Created on: Dec 9, 2008
 *      Author: seivan
 */

#include <deque>
#include <stack>
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <sstream>
//#include "Token_Handler.h"
#include "Operand_Handler.h"
#include "Operator_Handler.h"

#ifndef POSTFIX_H_
#define POSTFIX_H_

class Postfix { // : public Operand_Handler, public Operator_Handler {
public:
	Postfix();
	virtual ~Postfix();

	std::deque<std::string> infix_to_postfix(const std::string& infix_input);
	double evaluate(std::deque<std::string> postfix);

private:
	void check_string(const std::string& infix_unput);
	static std::map<char, int> operator_table;
	static double calculate(const std::string& token, double& operand_left, double& operand_right);
	Operand_Handler operand_check;
	Operator_Handler operator_check;

};

#endif /* POSTFIX_H_ */
