#pragma once

#include <string>
#include <vector>

#include "Creature.h"

class Area;
class Weapon;
class Armour;

class Player : public Creature
{
public:
	//Classes for pointers

	//Default Constructor
	Player();

	//Parameter Constructor
	Player(std::string newName, std::string newDescription, float newMaxhealth, float newCurrentHealth, float newBaseAttack, float newBaseDefense, float newBaseSpeed, Weapon* newCurrentWeapon, Armour* newCurrentHelmet, Armour* newCurrentBodyPiece, Area* newCurrentArea);
	//Fuctions

	//Destructor
	~Player();
private:
	//Data
	//Basic info
	
	
	//Advanced info
	

	//Current state
	Weapon* currentWeapon;
	Armour* currentHelmet;
	Armour* currentBodyPiece;
	std::vector<std::string> inventory;
	Area* currentArea;

};

