/*
 * uppg1.cpp
 *
 *  Created on: Nov 25, 2008
 *      Author: seivan
 */

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

bool choice() {
	bool answer;
	int choice = 0;
		cout << "Type 1 for sort or 0 for just to show data" << endl;
		cin >> choice;
		if(choice==1) {
			answer = true;
		}
		else if(choice==0) {
			answer = false;
		}
	return answer;
}


vector<int> open_with_choice(bool answer, string filename) {
	vector<int> lines;
	int line = 0;
	ifstream searchfile(filename.c_str());
	if (searchfile.is_open() && answer==true) {
		while (!searchfile.eof()) {
			searchfile >> line;
			lines.push_back(line);
			}

	}
	else if (searchfile.is_open() && answer==false) {
		while (!searchfile.eof()) {
			searchfile >> line;
			cout << line << endl;
		}
	}
	else {
		cout << "shutdown" << endl;
	}
	return lines;
}

void sort_and_save(vector<int> lines, string filename) {
	string filename_sort = filename + ".sort";

	ofstream newfile (filename_sort.c_str());
	vector<int>::iterator it;
	sort(lines.begin(), lines.end());
	for(it = lines.begin(); it != lines.end(); it++) {
		newfile << *it << endl;;
	}
}

int main() {
	string filename;
	cout << "Please type in the file name with extension" << endl;
	cin >> filename;
	vector<int> output = open_with_choice(choice(), filename);
	if(!output.empty()) {
		sort_and_save(output, filename);
	}
}
