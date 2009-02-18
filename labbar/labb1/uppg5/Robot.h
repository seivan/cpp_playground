/*
 * Robot.h
 *
 *  Created on: 2008-nov-06
 *      Author: wez
 */

#ifndef ROBOT_H
#define ROBOT_H

class Robot
{
private:
	std::string name;
	std::string answers[3];

public:
	bool running;

	Robot(std::string _name);

	void start();
	void stop();
	bool is_running();
};
#endif
