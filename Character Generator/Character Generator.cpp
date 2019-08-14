#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <boost/range/algorithm.hpp>
#include "Character Generator.h"

using namespace std;

// Creating Character
int main()
// checks for class after credentials and prints out atrributes based on User choices
{

	cout << "Welcome to the Character Generator, your simple fantasy character creation tool!" << endl;
	cout << "Follow the text prompts and give in the correct inputs to answer the questions." << endl;


	ofstream SaveOut;
	ifstream SaveIn;

	Character First;
	Warrior Warrior;
	Rogue Rogue;
	Mage Mage;
	First.CharacterCreation();
	First.CharacterIntro();

	SaveIn.open("save.txt");
	if (SaveIn.is_open())
	{
		string item;
		while (getline(SaveIn, item))
		{
			First.AddInventory(item);
		}
		SaveIn.close();
	}

	First.AddInventory("sword");
	First.AddInventory("axe");
	First.AddInventory("adventurer's pack");

	boost::range::sort(First.Inventory());

	SaveOut.open("save.txt");
	if (SaveOut.is_open())
	{
		vector<string>& inv = First.Inventory();
		for (string item : inv)
		{
			SaveOut << item << "\n";
		}
		SaveOut.close();
	}
	system("pause");
	return 0;
}