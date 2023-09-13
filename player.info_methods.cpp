#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;

class PlayerInfo {
public:
	void setName();
	void setPass();
	string getInv();
	void display();
private:
	string name;
	string loot[10] = { "Shield", "Sword", "Healing Potion", "Dagger", "M.O.A.B.",
						"Roast Duck", "Goodberries", "Mana Potion", "Axe of Damage", "Wand of Waving"};
	string password;
};


void main() {

	PlayerInfo user;

	cout << "This program searches for three players by name and returns their information:\n\n";

	for (int count = 0; count < 3; count++) {

		user.setName();
		user.setPass();
		user.display();


	}

}

void PlayerInfo :: setName() {
	string n[4] = { "Lenny Langston", "Herbzigar Gerblinek", "Finn", "Blackjack" };

	int i = rand() % 4;
	while (name == n[i]) {
		int i = rand() % 4;
	}
	name = n[i];
}
void PlayerInfo::setPass() {

	string s[4] = { "password", "wordpass", "woopzoopsloop", "lemon817" };

	int i = rand() % 4;
	while (password == s[i]) {
		int i = rand() % 4;
	}
	password = s[i];
}
string PlayerInfo :: getInv() {
	string inventory;

		inventory = loot[rand() % 10];

	return inventory;
}
void PlayerInfo::display() {

	string slot;

	cout << "Player Info -\n"
		<< "Name:\t\t\t" << name << "\n"
		<< "Password:\t\t" << password << "\n"
		<< "Experience:\t\t" << rand() << "\n"
		<< "Position:\t\t" << rand() << "," << rand()
		<< "\nInventory:\n";
	for (int i = 0; i < 4; i++) {
		slot = getInv();
		cout << slot << "\n";
	}
}