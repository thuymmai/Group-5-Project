//Thuy Mai-Woods

#pragma once
#ifndef TESTING_SEARCH_EVENT_H
#define TESTING_SEARCH_EVENT_H

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

struct Event {
	string artistName;
	string eventName;
	string venue;
	string date;
	string location;
};

class SearchEvent {

public:

	//constructor
	SearchEvent() {

	}

	vector<Event> events;

	// Retrieves and displays full details of one event by index (Use Case 2)
	void viewEventDetails(int index) {

		bool validInput = false;
		while (validInput != true) {
			cin >> index;
			if (index >= 1 && index <= (int)events.size()) {
				validInput = true;
			} else {
				cout << "Invalid selection. Please enter a number between 1 and 16: \n";
				validInput = false;
			}

		}

		//if (index < 0 || index >= (int)events.size()) {
		//	cout << "Invalid selection. Please enter a number between 1 and 16: \n";
		//	return;
		//}

		Event event = events.at(index);
		cout << "\n-------------------------------\n";
		cout << "        Event Details          \n";
		cout << "-------------------------------\n";
		cout << "Event:    " << event.eventName << endl;
		cout << "Artist:   " << event.artistName << endl;
		cout << "Venue:    " << event.venue << endl;
		cout << "Date:     " << event.date << endl;
		cout << "Location: " << event.location << endl;
		cout << "-------------------------------\n";
	}

	//returns all events where the query matches any field
	vector<Event> searchEvents(string query) {
		vector<Event> results;

		string lowerCaseQuery = query;
		transform(lowerCaseQuery.begin(), lowerCaseQuery.end(), lowerCaseQuery.begin(), ::tolower);

		for (int i = 0; i < events.size(); i++) {
			string words[] = {
				events.at(i).artistName,
				events.at(i).eventName,
				events.at(i).venue,
				events.at(i).date,
				events.at(i).location
			};

			for (string field : words) {
				//ensure comparison is NOT case sensitive
				string lowerField = field;
				transform(lowerField.begin(), lowerField.end(), lowerField.begin(), ::tolower);

				if (lowerField.find(lowerCaseQuery) != string::npos) {
					results.push_back(events.at(i));
					break;
				}
			}
		}

		return results;
	}
};

#endif

//save the code below for now
//#pragma once
//#ifndef TESTING_SEARCH_EVENT_H
//#define TESTING_SEARCH_EVENT_H
//
//#include <iostream>
//#include <iomanip>
//#include <string>
//#include <fstream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Event {
//	string artistName;
//	string eventName;
//	string venue;
//	string date;
//	string location;
//};
//
//class SearchEvent {
//
//public:
//
//	//constructor
//	SearchEvent() {
//	
//	}
//
//	vector<Event> events;
//
//	//returns all events where the query matches any field
//	vector<Event> searchEvents(string query) {
//		vector<Event> results;
//
//		string lowerCaseQuery = query;
//		transform(lowerCaseQuery.begin(), lowerCaseQuery.end(), lowerCaseQuery.begin(), ::tolower);
//
//		for (int i = 0; i < events.size(); i++) {
//			string words[] = {
//				events.at(i).artistName,
//				events.at(i).eventName,
//				events.at(i).venue,
//				events.at(i).date,
//				events.at(i).location
//			};
//
//			for (string field : words) {
//				//ensure comparison is NOT case sensitive
//				string lowerField = field;
//				transform(lowerField.begin(), lowerField.end(), lowerField.begin(), ::tolower);
//
//				if (lowerField.find(lowerCaseQuery) != string::npos) {
//					results.push_back(events.at(i));
//					break;
//				}
//			}
//		}
//
//		return results;
//	}
//};

//#endif