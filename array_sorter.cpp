#pragma warning(disable: 4996)
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;

void main() {

	int a[20];
	
	unsigned int again = 1;

	while (again == 1) {

		int count[10] = { 0 };

		for (int i = 0; i <= 19; i++) {

			a[i] = (rand() % 10) + 1;

			switch (a[i]) {

			case 1:
				count[0]++;
				break;
			case 2:
				count[1]++;
				break;
			case 3:
				count[2]++;
				break;
			case 4:
				count[3]++;
				break;
			case 5:
				count[4]++;
				break;
			case 6:
				count[5]++;
				break;
			case 7:
				count[6]++;
				break;
			case 8:
				count[7]++;
				break;
			case 9:
				count[8]++;
				break;
			case 10:
				count[9]++;
				break;
			}

		}

		sort(a, a + 20);
		cout << "This program generates a random array of 20 numbers (between 1 and 10), sorts the numbers by increasing value, and calculates the occurrences of each...\n\n"
			<< "Original List Sorted:";

		for (int j = 0; j <= 19; j++) {

			cout << "\na[" << j << "] = " << a[j];
		}

		cout << "\n\nN Count:";

		for (int k = 0; k <= 9; k++) {

			cout << "\n" << k + 1 << ":  " << count[k];
		}

		cout << "\nWould you like to run another set? (1 = Yes, Else = No): ";
		cin >> again;
		
	}
}