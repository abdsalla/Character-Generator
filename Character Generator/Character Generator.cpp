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

	Character Second;
	Second.CharacterCreation();
	Second.CharacterIntro();
	SaveIn.open("save2.txt");
	if (SaveIn.is_open())
	{
		string item;
		while (getline(SaveIn, item))
		{
			Second.AddInventory(item);
		}
		SaveIn.close();
	}

	Second.AddInventory("sword");
	Second.AddInventory("axe");
	Second.AddInventory("adventurer's pack");

	boost::range::sort(Second.Inventory());

	SaveOut.open("save2.txt");
	if (SaveOut.is_open())
	{
		vector<string>& inv = Second.Inventory();
		for (string item : inv)
		{
			SaveOut << item << "\n";
		}
		SaveOut.close();
	}

	system("pause");

	Character Third;
	Third.CharacterCreation();
	Third.CharacterIntro();
	SaveIn.open("save3.txt");
	if (SaveIn.is_open())
	{
		string item;
		while (getline(SaveIn, item))
		{
			Third.AddInventory(item);
		}
		SaveIn.close();
	}

	Third.AddInventory("sword");
	Third.AddInventory("axe");
	Third.AddInventory("adventurer's pack");

	boost::range::sort(Third.Inventory());

	SaveOut.open("save3.txt");
	if (SaveOut.is_open())
	{
		vector<string>& inv = Third.Inventory();
		for (string item : inv)
		{
			SaveOut << item << "\n";
		}
		SaveOut.close();
	}

	system("pause");

	cout << "These are your created characters: " << endl;

	if (First.classSelect == 'w' || First.classSelect == 'W') 
	{
		
		Warrior.PrintInfo();
	}

	else if (First.classSelect == 'r' || First.classSelect == 'R')
	{
		Rogue.PrintInfo();
	}

	else if (First.classSelect == 'e' || First.classSelect == 'E')
	{
		Mage.PrintInfo();
	}

	First.PrintInfo();
	cout << endl; 

	system("pause");

	if (Second.classSelect == 'w' || Second.classSelect == 'W')
	{
		Warrior.PrintInfo();
	}

	else if (Second.classSelect == 'r' || Second.classSelect == 'R')
	{
		Rogue.PrintInfo();
	}

	else if (Second.classSelect == 'e' || Second.classSelect == 'E')
	{
		Mage.PrintInfo();
	}

	Second.PrintInfo();
	cout << endl; 

	if (Third.classSelect == 'w' || Third.classSelect == 'W')
	{
		Warrior.PrintInfo();
	}

	else if (Third.classSelect == 'r' || Third.classSelect == 'R')
	{
		Rogue.PrintInfo();
	}

	else if (Third.classSelect == 'e' || Third.classSelect == 'E')
	{
		Mage.PrintInfo();
	}

	Third.PrintInfo();
	cout << endl;

	system("pause");

	return 0;
}