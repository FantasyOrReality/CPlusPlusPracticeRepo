#include <iostream>

#include "Monster.h"

Monster::Monster()
	: Creature("", "", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f)
	, type("")
{
	std::cout << "Monster class " << name << " constructed by default." << std::endl;

}

Monster::Monster(std::string newName, std::string newDescription, float newMaxhealth, float newCurrentHealth, float newBaseAttack, float newBaseDefense, float newBaseSpeed, std::string newType)
	: Creature(newName, newDescription, newMaxhealth, newCurrentHealth, newBaseAttack, newBaseDefense, newBaseSpeed)
	, type(newType)
{
	std::cout << "Monster class " << name << " constructed with parameters." << std::endl;

}

Monster::~Monster()
{
	std::cout << "Monster class " << name << " destroyed." << std::endl;
	std::cout << std::endl;

}
