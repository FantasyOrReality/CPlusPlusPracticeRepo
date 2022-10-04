#pragma once

#include <string>
class Monster
{
public:

	//Basic info
	std::string name;
	std::string type;
	std::string description;

	//Advanced info
	int attack;
	int defense;
	int speed;
	int maxHealth;

	//Current State
	int currentHealth;

};

