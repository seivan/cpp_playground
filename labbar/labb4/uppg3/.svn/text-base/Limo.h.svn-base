/*
 * Limo.h
 *
 *  Created on: Dec 2, 2008
 *      Author: seivan
 */

#ifndef LIMO_H_
#define LIMO_H_
#include "Taxi.h"
class Limo: public Taxi {
public:
	Limo(const std::string& reg_number);
	virtual ~Limo();
	std::string get_class_name() const;
	void print(std::ostream& os) const;
	friend std::ostream& operator<<(std::ostream& os, const Limo& rhs);
};

#endif /* LIMO_H_ */
