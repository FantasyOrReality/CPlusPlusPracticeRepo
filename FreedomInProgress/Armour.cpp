#include <iostream>

#include "Armour.h"

Armour::Armour() 
	: Item("", "", "", 0.0f, 0.0f, 0.0f)
{
	std::cout << "Armour class " << name << " constructed by default." << std::endl;

}

Armour::Armour(std::string newName, std::string newType, std::string newDescription, float newAttackBonus, float newDefenseBonus, float newSpeedBonus) 
	: Item(newName, newType, newDescription, newAttackBonus, newDefenseBonus, newSpeedBonus)

{
	std::cout << "Armour class " << name << " constructed with parameters." << std::endl;
}

void Armour::Use()
{
}

Armour::~Armour()
{
	std::cout << "Armour class " << name << " destroyed." << std::endl;
	std::cout << std::endl;

}
