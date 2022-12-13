#include <iostream>

#include "Potion.h"

Potion::Potion()
	
	: Item("", "", "", 0.0f, 0.0f, 0.0f)
	, HealthRestore(0.0f)
{
	std::cout << "Potion class " << name << " constructed by default." << std::endl;

}

Potion::Potion(std::string newName, std::string newType, std::string newDescription, float newAttackBonus, float newDefenseBonus, float newSpeedBonus, float newHealthRestore)
	: Item(newName, newType, newDescription, newAttackBonus, newDefenseBonus, newSpeedBonus)
	, HealthRestore(newHealthRestore)
{
	std::cout << "Potion class " << name << " constructed with parameters." << std::endl;
}

Potion::~Potion()
{
	std::cout << "Potion class " << name << " destructed!." << std::endl;
}

void Potion::Use()
{
}
