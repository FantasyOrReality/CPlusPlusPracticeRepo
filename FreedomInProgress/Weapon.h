#pragma once

#include <string>

#include "Item.h"

class Weapon : public Item
{
public:
	//Default constructor
	Weapon();

	//Parameter constructor
	Weapon(std::string newName, std::string newType, std::string newDescription, float newAttackBonus, float newDefenseBonus, float newSpeedBonus);

	//Getters
	float GetAttackBonus();

	//Functions
	void Use();

	//Destructor
	~Weapon();


private:
	
	

	

};

