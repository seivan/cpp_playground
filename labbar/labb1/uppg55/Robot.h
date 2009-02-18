/*
 * Robot.h
 *
 *  Created on: Nov 6, 2008
 *      Author: seivan
 */

#ifndef ROBOT_H_
#define ROBOT_H_
#include <iostream>
#include <ctime>
#include <cstdlib>

class Robot {

private:
	std::string name;
	const std::string pokeOne, pokeTwo, pokeThree;

public:
	Robot(std::string name);
	~Robot();
	bool running;
	void start();
	void stop();
	bool is_running();
	int randomized;

};

#endif /* ROBOT_H_ */
