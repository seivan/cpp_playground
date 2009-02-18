/*
 * Vehicle.h
 *
 *  Created on: Dec 1, 2008
 *      Author: seivan
 */

#ifndef VEHICLE_H_
#define VEHICLE_H_

#include <iostream>
#include <string>
class Vehicle {

	//friend class Taxi;
private:
	const std::string vehicle_reg_number;
	std::string vehicle_color;
	const int vehicle_number_of_doors;
	static unsigned int number_of_objects;
	bool customers;

public:
	Vehicle(const std::string& reg_number, const std::string& color,
			const int number_of_doors);
	virtual ~Vehicle();
	void set_color(const std::string& color);
	std::string get_color() const;
	int get_number_of_doors() const;
	std::string get_reg_number() const;
	virtual std::string get_class_name() const;
	bool has_customers() const;
	void set_has_customers(const bool flag);
	static int get_number_of_objects();
	virtual void print(std::ostream& os) const = 0;
	friend std::ostream& operator<<(std::ostream& os, const Vehicle& rhs);

};
//std::ostream& operator << (std::ostream& os, const Vehicle& rhs);
#endif /* #ifndef VEHICLE_H_ */
