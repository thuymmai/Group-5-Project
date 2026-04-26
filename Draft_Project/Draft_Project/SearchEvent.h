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
#include "Draft_Source.cpp"
using namespace std;

//Note: a vector with a struct for artist, location, and date of event
//use a text file that is loaded into a vector
//use getline

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


