/*
 * Token_Handler.h
 *
 *  Created on: Dec 10, 2008
 *      Author: seivan
 */

#include <iostream>
#ifndef TOKEN_HANDLER_H_
#define TOKEN_HANDLER_H_

class Token_Handler {
public:
	Token_Handler() {}
	virtual ~Token_Handler() {}

	virtual bool is_of_type(const std::string& token) = 0;
};

#endif /* TOKEN_HANDLER_H_ */
