/*
 * uppg4.cpp
 *
 *  Created on: 2008-nov-11
 *      Author: wez
 */

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "Roman.h"
using namespace std;

int points = 0;

vector<int> asked_numbers;
vector<string> asked_roman;

int main() {
	bool is_running = true;

	srand((unsigned) time(0));
	cout << "Välkommen till \"spelet\"." << endl;

	while (is_running) {
		int ask_value = (rand() % 4) + 1;
		int ask_type = (rand() % 2) + 1;
		int answer = 0;
		string answer_string = "";
		Roman* roman;

		switch (ask_type) {
		case 1:
			// ask about decimal integer
			roman = new Roman(ask_value);
			while (find(asked_roman.begin(), asked_roman.end(), roman->rom()) != asked_roman.end())
			{
				delete roman;
				roman = NULL;

				ask_value = (rand() % 5000) + 1;
				roman = new Roman(ask_value);
			}

			cout << "Vad blir " << roman->rom() << " i decimalform? ";

			cin >> answer;

			if (answer != ask_value) {
				is_running = false;
				cout << "Tyvärr var det fel, rätt svar: " << ask_value << ". Du fick " << points << " poäng." << endl;
			} else {
				points++;
				cout << "Det var rätt! Antal poäng: " << points << endl;
			}

			asked_roman.push_back(roman->rom());
			delete roman;
			roman = NULL;

			break;

		case 2:
			// ask about a roman number
			while (find(asked_numbers.begin(), asked_numbers.end(), ask_value) != asked_numbers.end()) {
				ask_value = (rand() % 5000) + 1;
			}

			cout << "Vad blir " << ask_value << " i romerska siffror? ";
			cin >> answer_string;

			roman = new Roman(answer_string);
			answer = roman->dec();
			if (answer != ask_value) {
				is_running = false;
				cout << "Tyvärr var det fel, rätt svar: " << roman->rom() << ". Du fick " << points << " poäng." << endl;
			} else {
				points++;
				cout << "Det var rätt! Antal poäng: " << points << endl;
			}

			asked_numbers.push_back(ask_value);
			delete roman;
			roman = NULL;
			break;
		}
	}

	return 0;
}
