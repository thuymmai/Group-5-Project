#pragma once
#ifndef LOGGING_IN_H
#define LOGGING_IN_H

#include <string>
using namespace std;

class UserLogIn {

private:
	string username;
	string password;
public:
	//default constructor
	UserLogIn() {
		username = "";
		password = "";
	}

	//constructor
	UserLogIn(string aName, string aPassword) {
		username = aName;
		password = aPassword;
	}

	//define setter
	void getUsername(string u) {
		username = u;
	}

	void getPassword(string p) {
		password = p;
	}


};

#endif // !LOGGING_IN

