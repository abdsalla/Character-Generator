#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// start of Character Generator
class Character {

protected:
	
	string characterClass;
	int health;
	vector<string> inventory;

public:

	char raceSelect;
	char classSelect;
	string race;
	string name;

	void AddInventory(string item) {
		inventory.push_back(item);
	};

	vector<string>& Inventory() {
		return inventory;
	};

	void CharacterIntro() {
		cout << name << ": " << "Hello, I am the " << race << " " << characterClass << " " << name << "\n";
	};

	// Setting the Character Credentials for later use
	void CharacterCreation() {
		cout << "What is your name, traveler?" << endl;
		cin >> name;
		// do while loop when selecting race and class. This makes sure that the user will input correct information before they exit out.
		cout << "Select your race: \n o = Orc, h = human, e = elf." << "\n";
		cin >> raceSelect;
		do {
			if (raceSelect == 'o' || raceSelect == 'O') {
				race = "Orc";
				break;
			}
			else if (raceSelect == 'h' || raceSelect == 'H') {
				race = "Human";
				break;
			}
			else if (raceSelect == 'e' || raceSelect == 'E') {
				race = "Elf";
				break;
			}
			else {
				race = "";
				raceSelect = NULL;
				cout << "That input was invalid, please try again." << endl;
				cin >> raceSelect;
			}
		} while (raceSelect == NULL && raceSelect != 'o' || raceSelect != 'O' || raceSelect != 'E' || raceSelect != 'e' || raceSelect != 'H' || raceSelect != 'h');

		cout << "Explain your expertise, " << name << endl;
		cout << "(Choose your class: r = Rogue, w = Warrior, m = Mage)\n";
		cin >> classSelect;
		do {
			if (classSelect == 'w' || classSelect == 'W') {
				characterClass = "Warrior";
				health = 200;
				break;
			}
			else if (classSelect == 'r' || classSelect == 'R') {
				characterClass = "Rogue";
				health = 150;
				break;
			}
			else if (classSelect == 'm' || classSelect == 'M') {
				characterClass = "Mage";
				health = 100;
				break;
			}
			else {
				characterClass = "";
				classSelect = NULL;
				cout << "That input was invalid, please try again." << endl;
				cin >> classSelect;
			}
		} while (classSelect == NULL && classSelect != 'o' || classSelect != 'O' || classSelect != 'E' || classSelect != 'e' || classSelect != 'H' || classSelect != 'h');

		cout << "Introduce yourself to the rest of the party.\n";

	}

	void PrintInfo()
	{
		cout << "Base health : " << health << endl;
	}

};

// definition for the sub classes of Character

class Rogue : public Character {

private:
	string classSkill = "Shadow Step";
	string signatureItem = "Thieves' Tools";
	
public:

	void GetDescription() {
		cout << " As a Rogue you are an individual with expertise in dexterity and illegal activities.\n";
	}

	void PrintInfo() {
		//cout << "Name: " << name << endl;
		//cout << "Race: " << race << endl;
		//cout << "Class: " << characterClass << endl;
		cout << "Class Skill: " << classSkill << endl;
		cout << "Signature Item: " << signatureItem << endl;
		cout << "Nature: " << endl;
		GetDescription();
		//Character::CharacterIntro();
	}
};

class Warrior : public Character {

private:
	string classSkill = "Rage";
	string signatureItem = "Sigil";

public:
	void GetDescription() {
		cout << " As a Warrior you are a reckless soldier that risks life and limb through physical combat.\n";
	}

	void PrintInfo() {
		//cout << "Name: " << name << endl;
		//cout << "Race: " << race << endl;
		//cout << "Class: " << characterClass << endl;
		cout << "Class Skill: " << classSkill << endl;
		cout << "Signature Item: " << signatureItem << endl;
		cout << "Nature: " << endl;
		GetDescription();
		//Character::CharacterIntro();
	}
};

class Mage : public Character {

private:
	string classSkill = "Studious";
	string signatureItem = "Mana Bead";

public:
	void GetDescription() {
		cout << " As a Mage, you are a manipulator of arcane energies to cast awesome spells.\n";
	}

	void PrintInfo() {
		//cout << "Name: " << name << endl;
		//cout << "Race: " << race << endl;
		//cout << "Class: " << characterClass << endl;
		cout << "Class Skill: " << classSkill << endl;
		cout << "Signature Item: " << signatureItem << endl;
		cout << "Nature: " << endl;
		GetDescription();
		//Character::CharacterIntro();
	}
	

};