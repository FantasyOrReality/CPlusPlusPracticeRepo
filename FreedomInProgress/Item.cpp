#include "Item.h"

Item::Item():
name("")
, type("")
, description("")
, attackBonus(0.0f)
, defenseBonus(0.0f)
, speedBonus(0.0f)
{
}

Item::Item(std::string newName, std::string newType, std::string newDescription, float newAttackBonus, float newDefenseBonus, float newSpeedBonus):
	name(newName)
	, type(newType)
	, description(newDescription)
	, attackBonus(newAttackBonus)
	, defenseBonus(newDefenseBonus)
	, speedBonus(newSpeedBonus)
{
}

Item::~Item()
{
}
