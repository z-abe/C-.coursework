#pragma warning(disable: 4996)
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

	double input;

	cout << "Welcome to the Babylonian root finder!\n"
		 << "Please enter a whole number to begin root finding: ";
	cin >> input;

	double root = sqrt(input);
	double guess = input / 2;
	double r = input / guess;

	guess = (guess + r) / 2;

	cout << "Guessing... " << guess << "\n";
	
	while (guess > root) {
		 
		r = input / guess;
		guess = (guess + r) / 2;

		cout << "Guessing... " << guess << "\n";

	}

	cout << "The Babylonians determine the root to be " << guess << "\n";
	cout << "Checking: " << guess << " * " << guess << " = " << guess * guess;



}