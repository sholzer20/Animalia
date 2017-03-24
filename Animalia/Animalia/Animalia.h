/***********************

*Name - Sam Holzer

*Project - Animalia/Inheritance

*Date Last Modified - 2/24/2017

*************************/

#ifndef ANIMALIA_H
#define ANIMALIA_H
#include<iostream>
/*
The classes Animal and Mammal have already been made for you by another team. Your mission, should you choose to
accept it, is to extend Animal meaningfully by creating another subtype in addition to Mammal, one of them mythological.

When you're done with that, go another round by extending Mammal to include two other mammals, one of them human and the
other non-human.

Human should have powers of speech and thought, represented by class methods that do something entertaining.

Humans must think before speaking, but do not have to think very well, depending on the type of human you are trying
to simulate.

Your non-human type can have powers of speech, but do not have to have powers of thought.

Kudos, and possibly more, for entertaining Matt.
*/

enum Sex {MALE, FEMALE, HERM};
enum HairType {BALD, NORMAL, EXTREME};
enum Gift {HEALING, STRENGTH, INTELLIGENCE};

class Animal
{
private:
	Sex sex;
	int birthYear;
public:
	Animal(Sex s, int year) : sex(s), birthYear(year) { }
	int Age(int);
};

class Mammal : public Animal
{
private:
	HairType hair;
public:
	Mammal(Sex s, int year) : Animal(s,year), hair(NORMAL) { } // Default hairtype is normal
	Mammal(Sex s, int year, HairType h) : Animal(s,year), hair(h) { } // Otherwise, let them set the hairtype
	virtual int Speek();
};

class MythicBeast : public Animal
{
private:
	HairType hair;
	Gift gift;
public:
	MythicBeast(Sex s, int year) : Animal(s, year), hair(EXTREME), gift(HEALING) { } //Default hairtype extreme and default gift healing
	MythicBeast(Sex s, int year, HairType h, Gift g) : Animal(s, year), hair(h), gift(g) { } // Otherwise, let them set hairtype
	int Speek();
	int useGift();
};


#endif