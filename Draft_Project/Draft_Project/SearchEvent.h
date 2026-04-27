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
	string venue;
	string location;
	string date;	//YYYY-MM-DD
};

class SearchEvent {

public:

	//Event SearchEvents();

	SearchEvent() {

	}

	//search events by 
	vector<Event> events;

	
	Event searchEvents(string anEvent) {
		for (int i = 0; i < events.size(); i++) {
			if (events.at(i).artistName == anEvent) {
				return events.at(i);
			}
		}
	}




};

#endif


