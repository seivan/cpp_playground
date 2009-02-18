/*
 * Car_Park.h
 *
 *  Created on: Dec 2, 2008
 *      Author: seivan
 */

#ifndef CAR_PARK_H_
#define CAR_PARK_H_
#include <list>
#include "Vehicle.h"
#include "Taxi.h"

class Car_Park {
private:
	std::list<Vehicle *> parked;
	const unsigned int space_left;


public:
	Car_Park(const unsigned int space_left);
	virtual ~Car_Park();
	void park(Vehicle* add);
	void unpark(std::string remove);
	void print(std::ostream& os);
	//friend std::ostream& operator<<(std::ostream& os, const Car_Park& rhs) const;
};

#endif /* CAR_PARK_H_ */
