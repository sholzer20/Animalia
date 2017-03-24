/***********************

*Name - Sam Holzer

*Project - Animalia/Inheritance

*Date Last Modified - 2/24/2017

*************************/

#include "Animalia.h"

int Mammal::Speek()
{
	std::cout << "...melifluous noise..." << std::endl;
	return 0;
}

int Animal::Age(int curYear)
{
	//curYear - birthYear == age
	return curYear - birthYear;
}

int MythicBeast::Speek()
{
	std::cout << "Fear me mortal..." << std::endl;
	return 0;
}

int MythicBeast::useGift()
{
	if (gift == HEALING)
		std::cout << "Rest, traveler." << std::endl;
	else if (gift == STRENGTH)
		std::cout << "Watch me lift this huge boulder!" << std::endl;
	else if (gift == INTELLIGENCE)
		std::cout << "Your ignorance is showing." << std::endl;
	return 0;
}
