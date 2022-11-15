#pragma once

#include <string>
#include <vector>

class Player
{
public:
	//Classes for pointers
	class Area;

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

