#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <cstdlib>
using namespace std;

class Counter {
public:
	Counter(int z1, int z2);
	void inc();
	void dec();
	void display();
private:
	int c1;
	int c2;
	int count = 0;
};

void main() {

	Counter c(0, 200);
	c.inc();
	c.dec();



}

Counter::Counter(int z1, int z2)
					: c1(z1), c2(z2)
{
	display();
}


void Counter::display() {

	cout << "Current state of Count1 (default constructor)\n";
	cout << "Current count: " << c1;
	cout << "\nTotal increments and decrements: " << count;
	cout << "\nCurrent state of Count2 (C2 = 200)\n";
	cout << "Current count: " << c2;
	cout << "\nTotal increments and decrements: " << count << "\n";

}

void Counter::inc() {
	
	for (int i = 0; i <= 84; i++) {
		c1++;
		count++;
	}

	cout << "Current state of Count1 after 85 inc()\n";
	cout << "Current count: " << c1;
	cout << "\nTotal increments and decrements: " << count << "\n";

}

void Counter::dec() {

	for (int j = 0; j <= 241; j++) {
		c2--;
		count++;
	}

	cout << "Current state of Count2 after 242 dec()\n";
	cout << "Current count: " << c2;
	cout << "\nTotal increments and decrements: " << count << "\n";

}