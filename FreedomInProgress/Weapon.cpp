#include "Weapon.h"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string newName, std::string newType, std::string newDescription, float newAttackBonus, float newDefenseBonus, float newSpeedBonus):
	Item(newName, newType, newDescription, newAttackBonus, newDefenseBonus, newSpeedBonus)
	
{
}

Weapon::~Weapon()
{
}
