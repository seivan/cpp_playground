/*
 * Taxi.h
 *
 *  Created on: Dec 1, 2008
 *      Author: seivan
 */

#ifndef TAXI_H_
#define TAXI_H_
#include <iostream>
#include <string>
#include "Vehicle.h"

//class Vehicle;
class Taxi: virtual public Vehicle {

public:
	Taxi(const std::string& reg_number);
	virtual ~Taxi();
	// Virtual in base class (vehicle)
	std::string get_class_name() const;
	// Virtual in base class (vehicle)
	void print(std::ostream& os) const;
	friend std::ostream& operator<<(std::ostream& os, const Taxi& rhs);
};
#endif /* #ifndef TAXI_H_ */
