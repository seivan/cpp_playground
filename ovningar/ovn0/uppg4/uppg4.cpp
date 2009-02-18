/*
 * uppg4.cpp
 *
 *  Created on: Nov 2, 2008
 *      Author: seivan
 *      Question: Provkör med ett stort heltalsvärde och notera vad som skrivs ut. Kan du förklara resultatet?
 *      Answer: Ja, den skriver först ut width på 6, sedan i, sedan width på 12 sedan i * i, sedan för varje tal, så skriver den ut
 *      samma width, fast i och i*i.
 *      Dvs i^2
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

void print_squares(int n) {
	if (n<=10 || n==30) {
	cout << endl << setw(6) << "i" << setw(12) << "i *i" << endl <<endl;

	for (int i = 1; i <=n; i++) {
		cout << setw(6) << i << setw(12) << i * i << endl;
	}
	}
	else {
		cout << "not a good number" <<endl;
	}

}

int main() {

	int x;

	cout << "Ge ett positivt heltal : " << endl;
	cin >> x;

	if (x > 0) {
		print_squares(x);
	}
	else {
		cout << "Det var inget positivt heltal!" << endl;
	}

	return 0;


}
