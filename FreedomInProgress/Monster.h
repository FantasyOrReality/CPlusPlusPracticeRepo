#pragma once

#include <string>

#include "Creature.h"

class Monster : public Creature
{
public:
	//Default Constructor
	Monster();

	//Parameter Constructor
	Monster(std::string newName, std::string newDescription, float newMaxhealth, float newCurrentHealth, float newBaseAttack, float newBaseDefense, float newBaseSpeed,std::string newType);

	//Destructor
	~Monster();
private:
	//Basic info
	std::string type;

	//Advanced info

	//Current State

};

