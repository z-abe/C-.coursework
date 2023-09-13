#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
#include "gun.h"
#include "handgun.h"
#include "revolver.h"
#include "pistol.h"

class cabinet : public gun {
public:
	string gunCabinet[2];
	virtual void print(int i) {
		if (i == 0)
		cout << "Revolver: " + gunCabinet[0] << endl;
		else
		cout << "Pistol: " + gunCabinet[1] << endl;
	};
};

int main() {

	gun guns[2];
	handgun h1, h2;
	pistol p1;
	revolver r1;
	cabinet *cab[2];
	cab[0] = new cabinet;
	cab[1] = new cabinet;

	guns[0].setGun("Smith&Wesson", "0.357", 0);
	guns[1].setGun("Glock", "9mm", 1);

	h1.setAttachments("Hoague Grips", "Trijicon", true, 0);
	h2.setAttachments("Standard Grips", "3 Dot Sights", false, 1);

	p1.setAuto(true, 1);

	r1.setAction(false, 6, 0);

	cab[0]->gunCabinet[0] = guns[0].manufacturer + guns[0].caliber + h1.grips + h1.sights + h1.laser + r1.rounds + r1.action;
	cab[1]->gunCabinet[1] = guns[1].manufacturer + guns[1].caliber + h2.grips + h2.sights + h2.laser + p1.bang;

	cout << "My gun cabinet contains:" << endl;

	for (int i = 0; i < 2; i++) {
		cab[i]->print(i);
	}


}