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

//Note: a vector with a struct for artist, location, and date of event
//use a text file that is loaded into a vector
//use getline

class SearchEvent {

public:
	struct Event {
		string artistName;
		string venue;
		string location;
		string date;	//YYYY-MM-DD
	};

	SearchEvent();

	//search events by artist name
	vector<Event> artistName;



};

#endif


