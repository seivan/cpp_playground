/*
 * Postfix.cpp
 *
 *  Created on: Dec 9, 2008
 *      Author: seivan
 */

#include "Postfix.h"

using namespace std;

Postfix::Postfix() {}

Postfix::~Postfix() {}

deque<string> Postfix::infix_to_postfix(const string& infix_input) {
	deque<string> postfix;
	stack<string> operators;
	string operands = "";
	check_string(infix_input);

	for (unsigned int i = 0; i < infix_input.length(); i++) {
		if (operand_check.is_of_type(&infix_input[i])) {
			operands.append(string(1, infix_input[i]));
			if (infix_input.length() == i + 1) {
				postfix.push_back(operands);
			}

		} else if ((operator_check.is_of_type(string(1, infix_input[i])))) {
			postfix.push_back(operands);
			operands = "";

			if (operators.empty() || (operator_check.get_priority(
					operators.top()) < operator_check.get_priority(string(1,
					infix_input[i])))) {
				operators.push(string(1, infix_input[i]));
			}

			else if (!operators.empty() && (operator_check.get_priority(
					operators.top()) >= operator_check.get_priority(string(1,
					infix_input[i])))) {
				postfix.push_back(operators.top());
				operators.pop();
				operators.push(string(1, infix_input[i]));

			}
		} else if (isspace(infix_input[i])) {
		}
	}
	while (!operators.empty()) {
		postfix.push_back(operators.top());
		operators.pop();
	}

	return postfix;
}

double Postfix::evaluate(deque<string> postfix) {

	stack<double> operands;

	while (!postfix.empty()) {
		string tokens = postfix.front();
		postfix.pop_front();

		if (operand_check.is_of_type(tokens)) {
			operands.push(atof(tokens.c_str()));

		} else {
			double operand_right = operands.top();
			operands.pop();
			double operand_left = operands.top();
			operands.pop();
			double sum = calculate(tokens, operand_left, operand_right);
			operands.push(sum);
		}
	}
	return operands.top();
}

double Postfix::calculate(const string& token, double& operand_left,
		double& operand_right) {
	if (token == "+") {
		return operand_left + operand_right;
	} else if (token == "-") {
		return operand_left - operand_right;
	} else if (token == "*") {
		return operand_left * operand_right;
	} else if (token == "/") {
		if (operand_right == 0) {
			throw runtime_error("Can't divide with zero");
		} else {
			return operand_left / operand_right;
		}
	} else {
		return 0;
	}

}
// 5 +|| !operator_check.is_of_type((line[line.size()]))

void Postfix::check_string(const string& line) {
	for (unsigned int i = 0; i < line.length(); i++) {

		if (operator_check.is_of_type(string(1, line[0]))
				|| operator_check.is_of_type(string(1, line[line.size()]))) {
			throw runtime_error("There must be an operand before each operator");
		}

		else if ((operator_check.is_of_type(string(1, line[i]))) && (!isspace(
				line[i - 1]) || !isspace(line[i + 1]))) {
			throw runtime_error("There must be an operand after each operator");
		}


		else if (isspace(line[i]) && !(operand_check.is_of_type(&line[(i - 1)])
				|| operand_check.is_of_type(&line[(i + 1)]))) {
			throw runtime_error(
					"There must be one operand and whitespace before each operator");
		}

		else if (isspace(line[i]) && !(operator_check.is_of_type(string(1,
				line[(i - 1)])) || operator_check.is_of_type(string(1, line[(i+ 1)])))) {
			throw runtime_error(
					"There must be an operator between two operands");
		}

		else if (isalpha(line[i]) && !(operand_check.is_of_type(string(1,
				line[i])))) {
			throw runtime_error("Encountered a symbol \"" + line + "\""
					+ " that is neither a valid operator nor a valid operand");

		}

	}
}

