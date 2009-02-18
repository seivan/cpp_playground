#include "Roman.h"
#include "stdlib.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> split(string str, vector<string> delim, vector<string> split_vector) {
	int cut_at;

	while (str.length() > 0) { //((cut_at = str.find_first_of(delim)) != str.npos) {
		vector<string>::iterator it;
		for (it = delim.begin(); it != delim.end(); it++) {
			cut_at = str.find_first_of((*it));

			if (cut_at > 0)	// cut out!
				break;
		}

		if (cut_at > 0) {
			split_vector.push_back(str.substr(0, cut_at));
		}
		else
			break;

		str = str.substr(cut_at + 1);
	}

	if (str.length() > 0) {
		split_vector.push_back(str);
	}

	return split_vector;
}

bool isnumber(string str) {
	for (int i = 0; i < static_cast<int>(str.length()); i++) {
		if (!isdigit(str[i])) {
			return false;
		}
	}

	return true;
}

int main(int argc, char* argv[]) {
	int tot_dec = 0;
	int tot_rom = 0;
	bool sum = false;
	bool sum_separately = false;
	vector<string> numbers;
	vector<string> delim;
	Roman* roman;
	//Roman* roman2;

	setvbuf(stdout, 0, _IOLBF, 0);

	for (int i = 0; i < argc; i++) {
		if (static_cast<string>(argv[i]) == "--sum") {
			sum = true;
		}

		if (static_cast<string>(argv[i]) == "--sum-separately") {
			sum_separately = true;
		}
	}

	// delimiters to split by
	delim.push_back(" ");
	delim.push_back("\n");



	cout << "Skriv in de tal du vill konvertera: ";

	string conv_data = "a";
	while (!cin.eof()) {
		if (conv_data == "\0") {
			break;
		}

		getline(cin, conv_data);
		numbers = split(conv_data, delim, numbers);
	}

	vector<string>::iterator it;

	for (it = numbers.begin(); it != numbers.end(); it++) {
		if (isnumber(*it)) {
			roman = new Roman(atoi((*it).c_str()));

			if (!sum && !sum_separately) {
				cout << roman->rom() << endl;
			} else {
				tot_dec += atoi((*it).c_str());
			}
		} else {
			roman = new Roman(*it);

			if (!sum && !sum_separately) {
				cout << roman->dec() << endl;
			} else {
				tot_rom += roman->dec();
			}
		}

		delete roman;
		roman = NULL;
	}

	if (sum) {
		cout << tot_rom + tot_dec << endl;
	} else if (sum_separately) {
		roman = new Roman(tot_rom);

		cout << tot_dec << " " << roman->rom() << endl;

		delete roman;
		roman = NULL;
	}

	return 0;
}
