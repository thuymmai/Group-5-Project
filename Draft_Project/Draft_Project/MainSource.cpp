//start testing here
//Ticket Hub
//Thuy Mai-Woods
#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <vector>
//#include "SearchEvent.h"
#include "TestingSearchEvent.h"
using namespace std;

int main() {

	string input;

	cout << "------------------------------------\n";
	cout << "      Welcome to Ticket Hub!        \n";
	cout << "------------------------------------\n";
	cout << endl;
	cout << "\nEnter artist, event, venue, date, or location: ";
	getline(cin, input);

	SearchEvent* anEvent = new SearchEvent();

	//read from SearchEventList.txt
	ifstream searchEventFile("SearchEventList.txt");

	string line;
	while (getline(searchEventFile, line)) {
		if (!line.empty()) {
			vector<string> words;
			stringstream ss(line);
			string token;

			while (getline(ss, token, ',')) {
				if (!token.empty() && token[0] == ' ')
					token = token.substr(1);
				words.push_back(token);
			}

			if (words.size() >= 5) {
				Event someEvent;
				someEvent.artistName = words.at(0);
				someEvent.eventName = words.at(1);
				someEvent.venue = words.at(2);
				someEvent.date = words.at(3);

				//format of city and state should look like this: "Tampa" + "FL" -> "Tampa, FL")
				someEvent.location = words.at(4);
				if (words.size() >= 6)
					someEvent.location += ", " + words.at(5);

				anEvent->events.push_back(someEvent);
			}
		}
	}

	searchEventFile.close();

	vector<Event> results = anEvent->searchEvents(input);

	cout << "\n    Search Results    \n";

	if (results.empty()) {
		cout << "No events found matching \"" << input << "\".\n";
	}
	else {
		for (int i = 0; i < results.size(); i++) {
			cout << "\nEvent:    " << results.at(i).eventName << endl;
			cout << "Artist:   " << results.at(i).artistName << endl;
			cout << "Venue:    " << results.at(i).venue << endl;
			cout << "Date:     " << results.at(i).date << endl;
			cout << "Location: " << results.at(i).location << endl;
		}
	}

	delete anEvent;

	/**************************************************************************************/
	/**************************************************************************************/

	string inputViewEvent;

	cout << "\n    View Results    \n";
	cout << "\nWhich event would you like to view?\n";
	cout << "\n";
	cout << "1. BTS WORLD TOUR 'ARIRANG' IN TAMPA\n";
	cout << "2. Bruno Mars - The Romantic Tour\n";
	cout << "3. yung kai: stay with the ocean & i'll find you - the tour\n";
	cout << "4. World Cup: Match 10 Group E - Germany vs Curacao\n";

	getline(cin, inputViewEvent);

	cout << "You have picked " << inputViewEvent << ".\n";



	return 0;
}








////Ticket Hub
////Thuy Mai-Woods
//#pragma once
//
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <iomanip>
//#include <ctime>
//#include <vector>
//#include "Register.h"
//#include "LogIn.h"
////#include "SearchEvent.h"
//#include "TestingSearchEvent.h"
//using namespace std;
//
////struct Event {
////	string artistName;
////	string venue;
////	string location;
////	string date;	//YYYY-MM-DD
////};
//
//int main() {
//
//	string input;
//
//	cout << "------------------------------------\n";
//	cout << "      Welcome to Ticket Hub!        \n";
//	cout << "------------------------------------\n";
//	cout << endl;
//	cout << "\nEnter location, date, artist, event, or venue: ";
//	getline(cin, input);
//
//	SearchEvent* anEvent = new SearchEvent();
//
//	//read from SearchEventList.txt
//	ifstream searchEventFile("SearchEventList.txt");
//
//	string line;
//	while (getline(searchEventFile, line)) {
//		if (!line.empty()) {
//			vector<string> words;
//			stringstream ss(line);
//			string token;
//
//			while (getline(ss, token, ',')) {
//				if (!token.empty() && token[0] == '') {
//					token = token.substr(1);
//				}
//				words.push_back(token);
//			}
//
//			if (words.size() >= 5) {
//				Event someEvent;
//				someEvent.artistName = words.at(0);
//				someEvent.eve = words.at(0);
//				someEvent.artistName = words.at(0);
//				someEvent.artistName = words.at(0);
//			}
//
//			//object named Event
//			Event someEvent;
//			someEvent.artistName = words.at(0);
//			cout << words.at(0) << endl;
//
//			//someEvent.venue = words.at(1);
//			//cout << words.at(1) << endl;
//
//			//someEvent.location = words.at(2);
//			//cout << words.at(2) << endl;
//
//			//someEvent.date = words.at(3);
//			//cout << words.at(3) << endl;
//
//			anEvent->events.push_back(someEvent);
//		}
//	}
//
//	searchEventFile.close();
//
//
//
//	return 0;
//}





