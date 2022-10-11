#pragma once
#include <iostream>
using namespace std;
#ifndef VISITOR_H
#define VISITOR_H

class Visitor {
private: 
	string name; 
	string address;
	string email;
	int duration;
	bool parent; 
public: 
	void setName(string n);
	void setAddress(string a);
	void setEmail(string e);
	void setDuration(int d);
	void setParent(bool p);
	string getName() { return name; };
	string getAddress() { return address; };
	string getEmail() { return email; };
	int getDuration() { return duration; };
	bool getParent() { return parent; };

};
#endif
