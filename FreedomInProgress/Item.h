#pragma once

#include <string>
class Item
{
public:
	//Default Constructor
	Item();

	//Parameter Constructor
	Item(std::string newName, std::string newType, std::string newDescription, float newAttackBonus, float newDefenseBonus, float newSpeedBonus);
	//Getters

	//Setters

	//Functions


	//Destructor
	~Item();

protected:
	//Data
	//Basic info
	std::string name;
	std::string type;
	std::string description;

	//Advanced info
	float attackBonus;
	float defenseBonus;
	float speedBonus;

};

