/*
 * hello.cpp
 *
 *  Created on: Oct 30, 2008
 *      Author: seivan
 */

#include <iostream>
using namespace std;

int main() {
	string namn							;
	namn = "Sara";
	namn.clear();
	getline(cin, namn);
	/* cout << equal() */
	cout << "Hello " << namn << endl;

}
