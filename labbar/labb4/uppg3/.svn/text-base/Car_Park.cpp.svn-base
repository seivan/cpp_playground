/*
 * Car_Park.cpp
 *
 *  Created on: Dec 2, 2008
 *      Author: seivan
 */

#include "Car_Park.h"
using namespace std;
Car_Park::Car_Park(const unsigned int space_left) : space_left(space_left) {


}

Car_Park::~Car_Park() {
	// TODO Auto-generated destructor stub
}


void Car_Park::park(Vehicle* add_vehicle) {
	if(parked.size()>=space_left) {
		cout << "Not enough room to park the : " << add_vehicle->get_class_name() << endl;
	}
	else {
		parked.push_back(add_vehicle);
		cout << "Parked a " << add_vehicle->get_class_name() << endl;
	}


}
void Car_Park::unpark(string remove){
	list<Vehicle *>::iterator it;

	for(it = parked.begin(); it!=parked.end(); it++) {
		if((*it)->get_reg_number()==remove) {
			cout << (*it)->get_reg_number() << " left the Car Park" << endl;
			it = parked.erase(it);
		} else {
			cout << "There is no " << remove << endl;
		}
	}
}

void Car_Park::print(ostream& os) {
	list<Vehicle *>::iterator it;
	string customer;
	for(it = parked.begin(); it!=parked.end(); it++) {
		customer = (*it)->has_customers() ? "Has customer " : "Has no customers ";
		os << (*it)->get_class_name() << ": " << endl
			<< "Registration number: " << (*it)->get_reg_number() << endl
			<< "Number of doors: " << (*it)->get_number_of_doors()  << endl
			<< "Colour: " << (*it)->get_color() << endl
			<< customer << endl << endl;
	}
}
