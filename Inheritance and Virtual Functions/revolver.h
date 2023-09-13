#pragma once
#include <iostream>
#include <cstdlib>
#include <cctype>
#include "handgun.h"
#include <string>
using namespace std;

class revolver : public handgun {

public:
	string action;
	string rounds;

	void setAction(bool if_action, int ammo, int type) {
		rounds = to_string(ammo) + ", ";

		if (if_action == true)
			action = "Single Action";
		else
			action = "Double Action";
	}

	 virtual void print();

};