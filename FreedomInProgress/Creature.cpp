#include <iostream>

#include "Creature.h"

Creature::Creature()
	: Thing("", "")
	, maxHealth(0.0f)
	, currentHealth(0.0f)
	, baseAttack(0.0f)
	, baseDefense(0.0f)
	, baseSpeed(0.0f)
{
	std::cout << "Creature class " << name << " constructed by default." << std::endl;

}

Creature::Creature(std::string newName, std::string newDescription, float newMaxhealth, float newCurrentHealth, float newBaseAttack, float newBaseDefense, float newBaseSpeed) 
	: Thing(newName, newDescription)
	, maxHealth(newMaxhealth)
	, currentHealth(newCurrentHealth)
	, baseAttack(newBaseAttack)
	, baseDefense(newBaseDefense)
	, baseSpeed(newBaseSpeed)
{
	std::cout << "Creature class "<< name << " constructed with parameters." << std::endl;

}

void Creature::Look()
{
	std::cout << name << " started with " << maxHealth << " health." << std::endl;
	std::cout << name << "'s current health is " << currentHealth << "." << std::endl;
	std::cout << name << "'s base attack is " << baseAttack << "." << std::endl;
	std::cout << name << "'s base defense is " << baseDefense << "." << std::endl;
	std::cout << name << "'s base speed is " << baseSpeed <<"." << std::endl;
	std::cout << std::endl;
}

void Creature::Heal()
{
	//get the healing amount, soon this will be done through item stats
	float healingValue;
	std::cout << "How much healing was gained?" << std::endl<< std::endl;
	std::cin >> healingValue;

	//heal the creature
	currentHealth = currentHealth + healingValue;

	//make sure the current health doesn't go over max health
	if (currentHealth > maxHealth)
	{
		currentHealth = maxHealth;
	}

	//Print the health stats
	std::cout << name << "'s max health is " << maxHealth << "." << std::endl;
	std::cout << name << "'s current health is now " << currentHealth << "." << std::endl << std::endl;

}

void Creature::Harmed()
{
	//Check the damage amount. Soon, this will be checked through weapon stats and defense stats
	float DamageTaken;
	std::cout << "How much damage was taken?" << std::endl<< std::endl;
	std::cin >> DamageTaken;

	//Damage the creature
	currentHealth = currentHealth - DamageTaken;

	//Make sure the stats don't become negative
	if (currentHealth < 0)
	{
		currentHealth = 0;
	}

	//Print the health stats
	std::cout << name << "'s max health is " << maxHealth << "." << std::endl;
	std::cout << name << "'s current health is now " << currentHealth << "." << std::endl << std::endl;

}

Creature::~Creature()
{
	std::cout << "Creature class " << name << " destroyed." << std::endl;
	std::cout << std::endl;

}
