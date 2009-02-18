/*
 * Limo.cpp
 *
 *  Created on: Dec 2, 2008
 *      Author: seivan
 */

#include "Limo.h"

using namespace std;
Limo::Limo(const string& reg_number) : Vehicle(reg_number, "WHite", 4), Taxi(reg_number) {
	// TODO Auto-generated constructor stub

}

Limo::~Limo() {
	// TODO Auto-generated destructor stub
}
string Limo::get_class_name() const {
	return "Limo";
}
// Virtual in base class (vehicle)
void Limo::print(ostream& os) const {
	string customer;
	customer = has_customers() ? "Has customer " : "Has no customers ";
	os << get_class_name() << ":" << endl
	<< "Registration number: " << get_reg_number() << endl
	<< "Number of doors: " << get_number_of_doors()<< endl
	<< "Colour: " << get_color() << endl
	<< customer << endl;

}

ostream& operator<<(ostream& os, const Limo& rhs) {
	rhs.print(os);
	return os;
}
