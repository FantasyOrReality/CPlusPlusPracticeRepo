#include <iostream>

#include "Feature.h"

Feature::Feature()
	: name("")
	, description("")
{
	std::cout << "Feature " << name << " constructed by default." << std::endl;
}

Feature::Feature(std::string newName, std::string newDescription)
	: name(newName)
	, description(newDescription)
{
	std::cout << "Feature " << name << " constructed with parameters." << std::endl;

}

Feature::~Feature()
{
	std::cout << "Feature " << name << " destroyed." << std::endl;
	std::cout << std::endl;

}
