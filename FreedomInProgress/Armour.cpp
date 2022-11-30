#include "Armour.h"

Armour::Armour()
{
}

Armour::Armour(std::string newName, std::string newType, std::string newDescription, float newAttackBonus, float newDefenseBonus, float newSpeedBonus) :
Item(newName, newType, newDescription, newAttackBonus, newDefenseBonus, newSpeedBonus)

{

}

Armour::~Armour()
{
}
