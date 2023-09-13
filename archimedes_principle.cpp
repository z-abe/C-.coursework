#pragma warning(disable: 4996)
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

	const double pi = 3.141592;
	double radius;
	double weight;
	double force;
	double volume;
	unsigned int again = 1;

	cout << "This program determines if a sphere of some weight will float in water.\nIt does so by calculating the buoyant force and comparing it to the weight of the sphere.\n";

	while (again == 1) {

		cout << "\nEnter the radius (in ft) of the sphere to compute volume of water displaced: ";
		cin >> radius;
		cout << "\nEnter the weight (in lbs) of the sphere: ";
		cin >> weight;
		cout << "\nYou entered " << weight << " pounds (lbs) " << "\nAnd a radius of " << radius << " feet\n";

		volume = (4 * pi * radius * radius * radius) / 3;
		force = volume * 62.4;

		cout << "The Buoyant force = " << force;

		if (weight > force) {
			cout << "\nThe sphere is a sinker!\n";
		}
		else if (weight < force) {
			cout << "\nThe sphere is a floater!\n";
		}
		else if (weight = force) {
			cout << "The sphere is suspended at current depth!\n";
		}

		cout << "Would you like to try another sphere? (1 = yes, 0 = exit, anything else will break the program): ";
		cin >> again;

	}
}