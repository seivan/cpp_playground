/*
 * uppg2.cpp
 *
 *  Created on: Nov 24, 2008
 *      Author: seivan
 */

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

vector<string> open_and_find() {
	string file;
	vector<string> lines;
	string line;
	cout << "Please type in the file name with extension" << endl;
	cin >> file;
	ifstream searchfile(file.c_str());
	if (searchfile.is_open()) {
		while (!searchfile.eof()) {
			getline(searchfile, line);
			lines.push_back(line);
		}
	} else {
		cout << "shutdown" << endl;
	}
	return lines;
}

void search(vector<string> row, string searchword) {
	for (unsigned int i = 0; i != row.size(); i++)
		if (row[i].find(searchword) != string::npos) {
			cout << "FOUND : " << row[i] << endl;
		}
}

	int main() {
		cout << "Type in the word you are looking for";
		string searchword;
		cin >> searchword;
		search(open_and_find(), searchword);
	}

