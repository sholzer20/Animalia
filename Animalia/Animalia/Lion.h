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