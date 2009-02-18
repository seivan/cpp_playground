/*
 * uppg2.cpp
 *
 *  Created on: Nov 3, 2008
 *      Author: seivan
 */

#include <iostream>
using namespace std;
int multiply(int firstInt, int secondInt);
int divide(int firstInt, int secondInt);
int subtract(int firstInt, int secondInt);
int add(int firstInt, int secondInt);
int firstIntInput();

int questions();

int main() {
	//Declare variables used
	int firstInt, secondInt, operation, sum, total;
	bool runtime = true;
	cout << "1 : multiply" << endl << "2 : divide" << endl << "3 : subtract" << endl << "4 : add" << endl << "5 : restart" << endl;
	//Reset sum and firstInt and ask for a new firstInt
	firstInt = firstIntInput();

	do {
		cout << endl << "Pick an operation" << endl;
		cin >> operation;

		switch (operation) {
		case 1:
			secondInt = questions();
			firstInt = multiply(firstInt, secondInt);
			cout << firstInt;
			break;

		case 2:
			secondInt = questions();
			firstInt = divide(firstInt, secondInt);
			cout << firstInt;
			break;

		case 3:
			secondInt = questions();
			firstInt= subtract(firstInt, secondInt);
			cout << firstInt;
			break;

		case 4:
			secondInt = questions();
			firstInt = add(firstInt, secondInt);
			cout << firstInt;
			break;

		case 5:
			firstInt = firstIntInput();
			break;

		case 6:
			cout << "Ending...." << endl;
			return -1;

		//Default statement not added yet.
		default:
			cout << "Error...." << endl;


		}

	}

	while(runtime);
}

int firstIntInput(){
	int sum = 0;
	int firstInt = 0;
	cout << "First integer and sum was reset" << endl;
	cout << "Please enter an integer : ";
	cin >> firstInt;
	return firstInt;
}

int questions(){
	int secondInt = 0;
	cout << endl << "Please enter the second integer : " << endl;
	cin >> secondInt;
	if(!secondInt)
		return -1;
	return secondInt;
}

int multiply(int firstInput, int secondInput) {
	cout << "Multiply" << endl;
	return firstInput * secondInput;
}

int divide(int firstInput, int secondInput) {
	cout << "Divide" << endl;
	return firstInput / secondInput;
}

int subtract(int firstInput, int secondInput) {
	cout << "Subtract" << endl;
	return firstInput - secondInput;
}

int add(int firstInput, int secondInput) {
	cout << "Add" << endl;
	return firstInput+secondInput;
}
