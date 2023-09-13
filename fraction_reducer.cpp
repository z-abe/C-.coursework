#pragma warning(disable: 4996)
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int gcd(int numerator, int denominator);
int reduce(int num, int den);

void main() {

	int num;
	int den;
	unsigned int again = 1;

	cout << "Welcome to the GCD program...\n";

		while (again == 1) {
			cout << "\nPlease enter an integer numerator: ";
			cin >> num;

			cout << "Please enter an integer denominator: ";
			cin >> den;

			reduce(num, den);

			cout << "\n\nRun again? (1 = Yes, 0 = No): ";
			cin >> again;
		}


}

int gcd(int numerator, int denominator) {

	int t;

	while (denominator != 0) {
		t = denominator;
		denominator = numerator % denominator;
		numerator = t;
	}

	return numerator;
}

int reduce(int num, int den) {

	int red_num;
	int red_den;
	int g;

	g = gcd(num, den);

	red_num = num / g;
	red_den = den / g;

	cout << "\nThe greatest common denominator is " << g;
	cout << "\nThe fraction reduced is " << red_num << "/" << red_den;

	return 0;
}