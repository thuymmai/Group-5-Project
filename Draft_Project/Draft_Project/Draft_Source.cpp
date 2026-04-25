//Ticket Hub
//Thuy, Thi, Vasupradha

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Register.h"
#include "LogIn.h"
#include "SearchEvent.h"
using namespace std;

int main() {

	//read from a text file
	ifstream file("SearchEventList.txt");

	vector<string> v;
	string str;

	while (file >> str) {
		v.push_back(str);
	}

	copy(v.begin(), v.end(),
		ostream_iterator<string>(cout, "\n"));

	//generate random event
	srand(time(0));
	int randNum = rand() % 5 + 1;

	
	
	switch (randNum) {
	case 1: cout << "";
	case 2:
	case 3:
	case 4:
	case 5:

	}

	return 0;
}


