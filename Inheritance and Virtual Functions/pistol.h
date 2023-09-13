#pragma once
#include <iostream>
#include <cstdlib>
#include <cctype>
#include "handgun.h"
#include <string>
using namespace std;

class pistol : public handgun {

public:
	string bang;

	void setAuto(bool speed, int type) {
		if (speed == true)
			bang = "Semi-Auto";
		else
			bang = "Automatic";
	}
	virtual void print();

};
