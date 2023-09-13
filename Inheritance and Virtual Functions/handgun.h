#pragma once
#include <iostream>
#include <cstdlib>
#include <cctype>
#include "gun.h"
using namespace std;

class handgun : public gun {

public:
	string grips;
	string sights;
	string laser;

	void setAttachments(string grip, string sight, bool iflaser, int type) {
		grips = grip + ", ";
		sights = sight + ", ";
		if (iflaser == true)
			laser = "laser, ";
		if (iflaser == false)
			laser = "no laser, ";
	}
	virtual void print();
		
};