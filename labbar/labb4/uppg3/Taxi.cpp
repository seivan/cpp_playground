/*
 * Taxi.cpp
 *
 *  Created on: Dec 1, 2008
 *      Author: seivan
 */

#include "Taxi.h"
using namespace std;
Taxi::Taxi(const string& reg_number) : Vehicle(reg_number, "Yellow", 4) {

}

Taxi::~Taxi() {
}

// Virtual in base class (vehicle)
string Taxi::get_class_name() const {
	return "Taxi";
}

// Virtual in base class (vehicle)
void Taxi::print(ostream& os) const {
	string customer;
	customer = has_customers() ? "Has customer " : "Has no customers ";
	os << get_class_name() << ":" << endl
	<< "Registration number: " << get_reg_number() << endl
	<< "Number of doors: " << get_number_of_doors()<< endl
	<< "Colour: " << get_color() << endl
	<< customer << endl;
}

ostream& operator<<(ostream& os, const Taxi& rhs) {
	rhs.print(os);
	return os;
}
