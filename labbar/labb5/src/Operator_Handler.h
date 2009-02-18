/*
 * Operator_Handler.h
 *
 *  Created on: Dec 10, 2008
 *      Author: seivan
 */


#include <map>
#include "Token_Handler.h"
#ifndef OPERATOR_HANDLER_H_
#define OPERATOR_HANDLER_H_


class Operator_Handler : virtual public Token_Handler {
public:
	Operator_Handler();
	virtual ~Operator_Handler();
	bool is_of_type(const std::string& token);
	int get_priority(const std::string& token);


private:
	std::map<std::string, int> operator_table;
	std::map<std::string, int>::iterator iter;
	void create_table();


};

#endif /* OPERATOR_HANDLER_H_ */
