#include <iostream>

#include "Item.h"

Item::Item()
	: name("")
	, type("")
	, description("")
	, attackBonus(0.0f)
	, defenseBonus(0.0f)
	, speedBonus(0.0f)

{
	std::cout << "Item class " << name << " constructed by default." << std::endl;

}

Item::Item(std::string newName, std::string newType, std::string newDescription, float newAttackBonus, float newDefenseBonus, float newSpeedBonus)
	: name(newName)
	, type(newType)
	, description(newDescription)
	, attackBonus(newAttackBonus)
	, defenseBonus(newDefenseBonus)
	, speedBonus(newSpeedBonus)
{
	std::cout << "Item class " << name << " constructed with parameters." << std::endl;

}

Item::~Item()
{
	std::cout << "Item class " << name << " destroyed." << std::endl;
	std::cout << std::endl;

}
