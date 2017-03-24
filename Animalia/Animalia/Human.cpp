/***********************

*Name - Sam Holzer

*Project - Animalia/Inheritance

*Date Last Modified - 2/24/2017

*************************/

#include "Human.h"

// Humans must think before speaking. If they have not thought, nothing happens
// Thinking resets after they speak. Speach based on their Career
int Human::Speek()
{
	if (thought)
	{
		if (career == ACCOUNTANT)
		{
			std::cout << "I have saved the school millions of dollars!" << std::endl;
			thought = false;
		}
		else if (career == HISTORIAN)
		{
			std::cout << "Want to hear about the history of Whitworth University?" << std::endl;
			thought = false;
		}
		else if (career == JANITOR)
		{
			std::cout << "The campus is looking so beautiful today." << std::endl;
			thought = false;
		}
	}
	else
		std::cout << "Hmmmm..." << std::endl;
	return 0;
}

// Humans must think based on their Career. After they have thought, thought is set to true so they can speak
int Human::Think()
{
	if (career == ACCOUNTANT)
		std::cout << "So many numbers..." << std::endl;
	else if (career == HISTORIAN)
		std::cout << "These books are so heavy!" << std::endl;
	else if (career == JANITOR)
		std::cout << "Why are college students so messy?" << std::endl;
	thought = true;
	return 0;
}
