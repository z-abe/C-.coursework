#include <iostream>
#include <cstdlib>
#include <cctype>
#include <fstream>
#include <string>
using namespace std;

void main() {

	ifstream inStream;
	ofstream outStream;
	int action;
	string advice, temp;

	inStream.open("advice.txt");

	if (inStream.fail() == true) {
			inStream.close();
			outStream.open("advice.txt");
			cout << "First run. Creating file..." << endl;
			cout << "Enter your phrase for the next user:\n";
			getline(cin >> ws, advice);
			outStream << advice;
			outStream.close();
	} else
		inStream.close();

	cout << "Read or Write? (r=1/w=2): ";
	cin >> action;

	while (action == 1 || action == 2) {

		switch (action) {
		case 1:
			inStream.open("advice.txt");
			while (inStream) {
				getline(inStream, advice);
			}
			cout << "Old Advice:\n" << advice << endl;
			inStream.close();
			cout << "Read, Write, or Quit? (r=1/w=2/quit): ";
			cin >> action;
			break;
		case 2:
			outStream.open("advice.txt");
			cout << "Enter your phrase for the next user:\n";
			getline(cin >> ws, advice);
			outStream << advice;
			outStream.close();
			cout << "Read, Write, or Quit? (r=1/w=2/quit): ";
			cin >> action;
			break;
		}


	}

}