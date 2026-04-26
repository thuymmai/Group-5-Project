//Ticket Hub
//Thuy

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <ctime>
#include <vector>
#include "Register.h"
#include "LogIn.h"
#include "SearchEvent.h"
using namespace std;

struct Event {
	string artistName;
	string venue;
	string location;
	string date;	//YYYY-MM-DD
};

int main() {

	cout << "------------------------\n";
	cout << "      Ticket Hub        \n";
	cout << "------------------------\n";
	cout << endl;
	cout << "Welcome to Ticket Hub!";

	SearchEvent anEvent = new SearchEvent();

	//read from a text file
	ifstream searchEventFile("SearchEventList.txt");

	string line;
	while (getline(searchEventFile, line)) {
		if (!line.empty()) {
			vector<string> words;
			stringstream ss(line);
			while (getline(ss, line, ',')) {
				words.push_back(line);
			}

			//object named Event
			Event someEvent;
			someEvent.artistName = words.at(0);
			someEvent.venue = words.at(1);
			someEvent.location = words.at(2);
			someEvent.date = words.at(3);
			cout << words.at(3) << endl;

			anEvent.events.push_back(someEvent);
		}
	}

	searchEventFile.close();



	return 0;
}




