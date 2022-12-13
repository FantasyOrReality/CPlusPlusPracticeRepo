#include <iostream>

#include "Thing.h"

Thing::Thing()
	: name("")
	, description("")
{
	std::cout << "Thing class " << name << " constructed by default." << std::endl;

}

Thing::Thing(std::string newName, std::string newDescription)
	: name(newName)
	, description(newDescription)
{
	std::cout << "Thing class " << name << " constructed with parameters." << std::endl;

}

Thing::~Thing()
{
	std::cout << "Thing class " << name << " destroyed." << std::endl;
	std::cout << std::endl;

}
