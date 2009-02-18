/*
 * Calculator.cpp
 *
 *  Created on: Dec 9, 2008
 *      Author: seivan
 */

#include "Calculator.h"
#include <iostream>
#include <fstream>
using namespace std;

Calculator::Calculator() {}

Calculator::~Calculator() {}

void Calculator::read_and_evaluate_expression() {
	string infix_line;
	deque<string> postfix_line;
	string postfix_line_string;
	Postfix pf;
	ifstream numbers("numbers.txt");

	if (numbers.is_open()) {
		while (!numbers.eof()) {
			getline(numbers, infix_line);
			try {
				postfix_line = pf.infix_to_postfix(infix_line);
				for(unsigned int i = 0; i!= postfix_line.size(); i++) {
					postfix_line_string.append(postfix_line[i]);
				}

				cout  << "The infix expression " << infix_line << " is "
				<< postfix_line_string  <<" in postfix form and " << "evaluates to "
				<< pf.evaluate(postfix_line) << endl << endl;
				postfix_line_string.clear();
			} catch (const runtime_error& e) {
				cout  << "Caught exception for expression: " << infix_line << endl
				<< "First error was: " << e.what() << endl << endl;
				continue;
			}


		}
	}
}

