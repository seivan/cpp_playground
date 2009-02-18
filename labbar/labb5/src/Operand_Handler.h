/*
 * Operand_Handler.h
 *
 *  Created on: Dec 10, 2008
 *      Author: seivan
 */

#include "Token_Handler.h"
#ifndef OPERAND_HANDLER_H_
#define OPERAND_HANDLER_H_

class Operand_Handler : public Token_Handler {
public:
	Operand_Handler();
	virtual ~Operand_Handler();

	bool is_of_type(const std::string& token);
};

#endif /* OPERAND_HANDLER_H_ */
