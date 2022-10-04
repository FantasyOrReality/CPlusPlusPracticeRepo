#pragma once

#include <string>

class Weapon
{
public:

	//Basic info
	std::string name;
	std::string type;
	std::string description;

	//Advanced info
	float attackBonus;
	float defenseBonus;
	float speedBonus;

};

