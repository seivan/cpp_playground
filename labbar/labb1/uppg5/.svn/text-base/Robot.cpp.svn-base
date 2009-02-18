/*
 * Robot.cpp
 *
 *  Created on: 2008-nov-06
 *      Author: wez
 */

#include <cstdlib>
#include <iostream>
#include "Robot.h"

Robot::Robot(std::string _name)
{
	name = _name;
	running = false;

	answers[0] = "Stop poking me!";
	answers[1] = "Yees, I'm already on it!";
	answers[2] = "Geeez, calm down a little bit.";
}

void Robot::start()
{
	if (running)
	{
		// skriv ut någon text
		int i_answer = (rand() % 3);
		std::cout << name << ": \"" << answers[i_answer] << "\"" << std::endl;
	}
	else
	{
		running = true;
		std::cout << "Starting " << name << std::endl;
	}
}

void Robot::stop()
{
	if (running)
	{
		running = false;
		std::cout << name << " stopped." << std::endl;
	}
	else
	{
		std::cout << name << ": \"Zzzzzz\"" << std::endl;
	}
}

bool Robot::is_running()
{
	return running;
}
