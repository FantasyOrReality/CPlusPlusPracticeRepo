#pragma once

#include <string>

#include "Item.h"

class Armour : public Item
{
public:
	//Default Constructor
	Armour();

	//Parameter Constructor
	Armour(std::string newName, std::string newType, std::string newDescription, float newAttackBonus, float newDefenseBonus, float newSpeedBonus);


	//Destructor
	~Armour();

private:
	
	

};

