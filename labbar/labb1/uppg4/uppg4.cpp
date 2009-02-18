/*
 * uppg4.cpp
 *
 *  Created on: Nov 4, 2008
 *      Author: seivan
 */

#include <iostream>
using namespace std;

double inputInt();
double inputProcent();
int valueCheck(double startMoney, double endMoney, double procent);
int countYears(double startMoney, double endMoney, double procent);


int main(){
	double startMoney, endMoney, procent;
	int correctValues;

	// get input from the user
	cout << "Please type your start value : " << endl;
	startMoney = inputInt();

	cout << "Please type your end value : " << endl;
	endMoney = inputInt();

	cout << "Type your rate : " << endl;
	procent = inputProcent();

	// check that the values are correct
	correctValues = valueCheck(startMoney, endMoney, procent);

	if (correctValues == -1) {
		cout << "Error";
		return -1;
	}

	// give us an estimation in years
	cout << "Years : " << countYears(startMoney, endMoney, procent);
}


double inputInt(){
	double money;
	cin >> money;

	return money;
}
/* -1 means bad value, it is reused at valueCheck() */
double inputProcent() {
	double procent;
	cin >> procent;

	return procent;
}

int countYears(double startMoney, double endMoney, double procent) {
	int years = 0;
	procent = (procent / 100) + 1;

	while (startMoney < endMoney) {
		startMoney = startMoney * procent;
		years++;
	}

	return years;
}

int valueCheck(double startMoney, double endMoney, double procent) {
	if ((startMoney > endMoney) || (startMoney < 0) || (endMoney < 0) || (procent <= 0))
		return -1;

	return 1;
}
