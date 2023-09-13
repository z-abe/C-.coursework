#pragma warning(disable: 4996)
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;

void main() {

	unsigned int rolls;
	unsigned int again = 1;
	double count[11] = { 0 };

	srand(time(0));

	cout << "This program rolls two dice and tabulates the results...\n\n";


	while (again == 1) {
		cout << "Please enter the number of rolls desired: ";
		cin >> rolls;

		for (int i = 1; i <= rolls; i++) {

			int sum = ((rand() % 6) + 1) + ((rand() % 6) + 1);

			switch (sum) {

			case 2:
				count[0]++;
				break;
			case 3:
				count[1]++;
				break;
			case 4:
				count[2]++;
				break;
			case 5:
				count[3]++;
				break;
			case 6:
				count[4]++;
				break;
			case 7:
				count[5]++;
				break;
			case 8:
				count[6]++;
				break;
			case 9:
				count[7]++;
				break;
			case 10:
				count[8]++;
				break;
			case 11:
				count[9]++;
				break;
			case 12:
				count[10]++;
				break;
			}
		}

		double odds = rolls / 36;

		cout << "\n\nSum\t#Rolled\tOdds\t%Error\n"
			<< "2:\t" << count[0] << "\t" << odds * 1 << "\t" << 100 * ((fabs(count[0]/(odds * 1) - 1)))
			<< "\n3:\t" << count[1] << "\t" << odds * 2 << "\t" << 100 * ((fabs(count[1] / (odds * 2) - 1)))
			<< "\n4:\t" << count[2] << "\t" << odds * 3 << "\t" << 100 * ((fabs(count[2] / (odds * 3) - 1)))
			<< "\n5:\t" << count[3] << "\t" << odds * 4 << "\t" << 100 * ((fabs(count[3] / (odds * 4) - 1)))
			<< "\n6:\t" << count[4] << "\t" << odds * 5 << "\t" << 100 * ((fabs(count[4] / (odds * 5) - 1)))
			<< "\n7:\t" << count[5] << "\t" << odds * 6 << "\t" << 100 * ((fabs(count[5] / (odds * 6) - 1)))
			<< "\n8:\t" << count[6] << "\t" << odds * 5 << "\t" << 100 * ((fabs(count[6] / (odds * 5) - 1)))
			<< "\n9:\t" << count[7] << "\t" << odds * 4 << "\t" << 100 * ((fabs(count[7] / (odds * 4) - 1)))
			<< "\n10:\t" << count[8] << "\t" << odds * 3 << "\t" << 100 * ((fabs(count[8] / (odds * 3) - 1)))
			<< "\n11:\t" << count[9] << "\t" << odds * 2 << "\t" << 100 * ((fabs(count[9] / (odds * 2) - 1)))
			<< "\n12:\t" << count[10] << "\t" << odds * 1 << "\t" << 100 * ((fabs(count[10] / (odds * 1) - 1)));

			cout << "\n\nWould you like to roll again? (1 = Yes, Else = Exit): ";
			cin >> again;
	}

}