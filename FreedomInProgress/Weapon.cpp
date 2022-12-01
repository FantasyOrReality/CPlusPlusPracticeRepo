#include <iostream>

#include "Weapon.h"

Weapon::Weapon()
	: Item()

{
	std::cout << "Weapon class " << name << " constructed by default." << std::endl;


}

Weapon::Weapon(std::string newName, std::string newType, std::string newDescription, float newAttackBonus, float newDefenseBonus, float newSpeedBonus)
	: Item(newName, newType, newDescription, newAttackBonus, newDefenseBonus, newSpeedBonus)
	
{
	std::cout << "Weapon class " << name << " constructed with parameters." << std::endl;

}

Weapon::~Weapon()
{
	std::cout << "Weapon class " << name << " destroyed." << std::endl;
	std::cout << std::endl;

}
