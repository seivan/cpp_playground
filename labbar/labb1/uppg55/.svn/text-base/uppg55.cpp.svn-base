/*
 * uppg5.cpp
 *
 *  Created on: 2008-nov-06
 *      Author: wez
 */

#include <cstdlib>
#include <iostream>
#include "Robot.h"

Robot* robots[20];

int main()
{
	int i = 0, j = 0;

	for (i = 0; i < 20; i++)
	{
		// Create robots
		robots[i] = new Robot("Robot");
	}

	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int i_startstop = (rand() % 2);
			bool b_start = (i_startstop == 0) ? false : true;

			if (b_start)
				robots[i]->start();
			else
				robots[i]->stop();
		}

		delete robots[i];
		robots[i] = NULL;
	}
}
