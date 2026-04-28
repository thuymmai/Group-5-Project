#pragma once
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