/*
 * Vehicle.cpp
 *
 *  Created on: Dec 1, 2008
 *      Author: seivan
 */

#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(const std::string& reg_number, const std::string& color,
		const int number_of_doors) : vehicle_reg_number(reg_number),
		vehicle_color(color), vehicle_number_of_doors(number_of_doors) {

	number_of_objects++;

}

Vehicle::~Vehicle() {
	number_of_objects--;
}

void Vehicle::set_color(const std::string& color) {
	vehicle_color = color;
}

string Vehicle::get_color() const {
	return vehicle_color;
}

int Vehicle::get_number_of_doors() const {
	return vehicle_number_of_doors;
}

string Vehicle::get_reg_number() const {
	return vehicle_reg_number;
}

string Vehicle::get_class_name() const {
	return "Vehicle";
}

unsigned int Vehicle::number_of_objects;

int Vehicle::get_number_of_objects() {
	return number_of_objects;

}

void Vehicle::print(ostream& os) const {
	os << get_class_name() << ":" << endl
	<< "Registration number: " << get_reg_number() << endl
	<< "Number of doors: " << get_number_of_doors()<< endl
	<< "Colour: " << get_color() << endl
	<< endl;
}

ostream& operator<<(ostream& os, const Vehicle& rhs) {
	rhs.print(os);
	return os;
}

