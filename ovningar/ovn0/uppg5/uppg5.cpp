/*
 * uppg5.cpp
 *
 *  Created on: Nov 3, 2008
 *      Author: seivan
 *      Questions: Vad innebär det att argc är lika med 1 när man kör ett program?
 *      Answer: No argument given, argc is always 1. If argument given argc>1
 */

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	if (argc == 1) {
		cout << "C++ is so cool!" << endl;
	}


	else {
		while(argc!=0){
			argc--;
			cout <<argv[argc];

		}
	}
	/*else {
		for (int i = 1; i < argc; i++) {
			cout << argv[i] << " ";
		}
	}*/



}
