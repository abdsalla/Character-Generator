#include <iostream>
#include <string>
#include "Character Generator.h"

using namespace std;
	
	/*First.CharacterCreation();
	if (First.characterClass == "Warrior")
	{
		
		Warrior.name = First.name;
		Warrior.race = First.race;
		Warrior.characterClass = "Warrior";
		
	}

	else if (First.characterClass == "Rogue")
	{
		
		Rogue.name = First.name;
		Rogue.race = First.race;
		Rogue.characterClass = "Rogue";
		
	}
	else if (First.characterClass == "Mage")
	{
		
		Mage.name = First.name;
		Mage.race = First.race;
		Mage.characterClass = "Mage";
		
	}*/



// Creating Character
int main()
// checks for class after credentials and prints out atrributes based on User choices
{
	Character First;
	Warrior Warrior;
	Rogue Rogue;
	Mage Mage;
	First.CharacterCreation();
	system("pause");
	return 0;
}