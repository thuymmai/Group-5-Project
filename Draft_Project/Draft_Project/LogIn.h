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
	void setUsername(string u) {
		username = u;
	}

	void setPassword(string p) {
		password = p;
	}

	string getUsername() const {
		return username;
	}

	string getPassword() const {
		return password;
	}

	// Authentication method
	bool authenticate(string inputUsername, string inputPassword) const {
		return (username == inputUsername && password == inputPassword);
	}

};

#endif // !LOGGING_IN

