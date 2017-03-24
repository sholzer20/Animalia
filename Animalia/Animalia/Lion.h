/***********************

*Name - Sam Holzer

*Project - Animalia/Inheritance

*Date Last Modified - 2/24/2017

*************************/

#ifndef LION_H_
#define LION_H_

#include "Animalia.h"

class Lion : public Mammal
{
private:
public:
	Lion(Sex s, int year) : Mammal(s, year) { } // Uses default Mammal constuctor
	int Speek();
};

#endif