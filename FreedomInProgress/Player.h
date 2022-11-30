#pragma once

#include <string>
#include <vector>

#include "Creature.h"

class Area;

class Player : public Creature
{
public:
	//Classes for pointers

	//Constructor
	Player();

	//Fuctions

	//Data
	//Basic info
	std::string name;
	std::string description;
	
	//Advanced info
	int maxHealth;
	int baseAttack;
	int baseDefense;
	int baseSpeed;

	//Current state
	std::string currentWeapon;
	std::string currentHelmet;
	std::string currentBodyPiece;
	std::vector<std::string> inventory;
	int currentHealth;
	Area* currentArea;

};

