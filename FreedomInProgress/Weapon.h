#pragma once

#include <string>

#include "Item.h"

class Creature;
class Player;
class Monster;

class Weapon : public Item
{
public:
	//Classes
	

	//Default constructor
	Weapon();

	//Parameter constructor
	Weapon(std::string newName, std::string newType, std::string newDescription, float newAttackBonus, float newDefenseBonus, float newSpeedBonus, Monster* newTarget, Player* newCurrentHolder);

	//Getters
	float GetAttackBonus();

	//Setters
	void Use(Monster* setterTarget);

	//Destructor
	~Weapon();

protected:
	Monster* Target;
	Player* currentHolder;

private:
	
	

	

};

