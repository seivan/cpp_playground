/*
 * Robot.cpp
 *
 *  Created on: Nov 6, 2008
 *      Author: seivan
 */

#include "Robot.h"
#include <iostream>

using namespace std;

void Robot::start() {
	//Check if bool is true
	if (is_running()) {
		//If true, randomize between 1 and 2
		//and pick a case

		switch (randomized) {
		case 1:
			cout << pokeOne;
			break;
		case 2:
			cout << pokeTwo;
			break;
		default:
			cout << pokeThree;
			break;
		}

	} else {
		running = true;
		cout << "Starting " << name << endl;
	}
}

void Robot::stop() {
	if (is_running()) {
		running = false;
		cout << name << " stopped" << endl;
	} else {
		cout << name << " \"Zzzzz....\"" << endl;
	}
}

bool Robot::is_running() {
	if (running) {
		return true;
	} else {
		return false;
	}
}

Robot::Robot(string robotName) :
		pokeOne("Stop Poking me ONE\n"),
		pokeTwo("Stop Poking me TWO\n"),
		pokeThree("No more poke quotes\n") {
	name = robotName;
	running = false;

	randomized = (rand() % 3);
}

Robot::~Robot() {
	// TODO Auto-generated destructor stub
}
