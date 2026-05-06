//Thuy Mai-Woods
//Ticket Hub
#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <ctime>
#include <vector>
#include "Register.h"
#include "LogIn.h"
#include "SearchEvent.h"
//#include "TestingSearchEvent.h"
using namespace std;

//struct Event {
//	string artistName;
//	string venue;
//	string location;
//	string date;	//YYYY-MM-DD
//};

int main() {

	string input;

	cout << "**************************************\n";
	cout << "*       Welcome to Ticket Hub!       *\n";
	cout << "**************************************\n";
	cout << endl;
	cout << "Please enter artist, event, venue, date, or location: ";
	getline(cin, input);
	
	SearchEvent* anEvent = new SearchEvent();
	
	ifstream searchEventFile("SearchEventList.txt");

	string line;
	while (getline(searchEventFile, line)) {
		if (!line.empty()) {
			vector<string> words;
			stringstream ss(line);
			string token;

			while (getline(ss, token, ',')) {
				if (!token.empty() && token[0] == ' ') {
					token = token.substr(1);
				}
				words.push_back(token);
			}

			if (words.size() >= 5) {
				Event someEvent;
				someEvent.artistName = words.at(0);
				someEvent.eventName = words.at(0);
				someEvent.artistName = words.at(0);
				someEvent.artistName = words.at(0);
			}

			//object named Event
			Event someEvent;
			someEvent.artistName = words.at(0);


			anEvent->events.push_back(someEvent);
		}
	}

	searchEventFile.close();



	return 0;
}





