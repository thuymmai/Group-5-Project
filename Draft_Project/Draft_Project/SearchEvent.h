//Thuy Mai-Woods

#pragma once
#ifndef SEARCH_EVENT_H
#define SEARCH_EVENT_H

#include <iostream>
#include <iomanip>	//for setw later
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

	SearchEvent() {

	}

	//search events by 
	vector<Event> events;

	//return events where query matches any field
	vector<Event> searchEvents(string query) {
		vector<Event> results;

		string lowerCaseQuery = query;
		transform(lowerCaseQuery.begin(), lowerCaseQuery.end(), lowerCaseQuery.begin(), ::tolower);

		for (int i = 0; i < events.size(); i++) {

			// Put all fields into an array so they can be checked in one loop
			string fields[] = {
				events.at(i).artistName,
				events.at(i).eventName,
				events.at(i).venue,
				events.at(i).date,
				events.at(i).location
			};

		}
	}

	
	Event searchEvent(string anEvent) {
		for (int i = 0; i < events.size(); i++) {
			if (events.at(i).artistName == anEvent) {
				return events.at(i);
			}
		}
	}




};

#endif


