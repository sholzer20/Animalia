/***********************

*Name - Sam Holzer

*Project - Animalia/Inheritance

*Date Last Modified - 2/24/2017

*************************/

#ifndef HUMAN_H_
#define HUMAN_H_

#include "Animalia.h"

enum Career {ACCOUNTANT, HISTORIAN, JANITOR};
class Human : public Mammal
{
private:
	Career career;
	bool thought;
public:
	Human(Sex s, int year) : Mammal(s, year), career(JANITOR) { } // Uses the default constructor for Mammal, default career is janitor
	Human(Sex s, int year, HairType h, Career c) : Mammal(s, year, h), career(c) { } // Constructor for all private variables
	virtual int Speek();
	int Think();
};
#endif