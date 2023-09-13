#pragma once
#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

class gun {

public:
	string manufacturer;
	string caliber;

	void setGun(string brand, string bullet, int pos) {
		manufacturer = brand + ", ";
		caliber = bullet + ", ";
	}
	virtual void print();
};

