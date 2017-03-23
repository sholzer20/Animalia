/*********************

	*Name: Sam Holzer

	*Project: Animalia EC lab

	*Date Last Modified: 2/24/2017
*********************/

#include "Animalia.h"
#include "Human.h"
#include "Lion.h"
#include<iostream>

int main()
{
	Mammal herbert(MALE, 1977, EXTREME); //What's wrong with Herbert?
	herbert.Speek();
	std::cout << "Herbert is now " << herbert.Age(2015) << " years old.\n" << std::endl;

	Human George(MALE, 1994, NORMAL, JANITOR);
	George.Think();
	George.Speek();
	George.Speek();
	std::cout << "George is now " << George.Age(2015) << " years old.\n" << std::endl;

	Lion Laura(FEMALE, 1980);
	Laura.Speek();
	std::cout << "Laura is now " << Laura.Age(2015) << " years old.\n" << std::endl;

	MythicBeast Drax(HERM, 201, EXTREME, STRENGTH);
	Drax.Speek();
	Drax.useGift();
	std::cout << "Drax is now " << Drax.Age(2015) << " years old.\n" << std::endl;

	Mammal* Sam = new Human(MALE, 1997, EXTREME, ACCOUNTANT);
	Sam->Speek();

	delete Sam;

	return 0;
}