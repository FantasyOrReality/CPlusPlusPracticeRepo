#include <iostream>

#include "Weapon.h"
#include "Monster.h"
#include "Player.h"

Weapon::Weapon()
	: Item("", "", "", 0.00f, 0.00f, 0.00f)
	, Target(nullptr)
	, currentHolder(nullptr)

{
	std::cout << "Weapon class " << name << " constructed by default." << std::endl;


}

Weapon::Weapon(std::string newName, std::string newType, std::string newDescription, float newAttackBonus, float newDefenseBonus, float newSpeedBonus, Monster* newTarget, Player* newCurrentHolder)
	: Item(newName, newType, newDescription, newAttackBonus, newDefenseBonus, newSpeedBonus)
	, Target(newTarget)
	, currentHolder(newCurrentHolder)
	
{
	std::cout << "Weapon class " << name << " constructed with parameters." << std::endl;

}

float Weapon::GetAttackBonus()
{
	return attackBonus;
}

void Weapon::Use(Monster* setterTarget)
{
	

	//Use a weapon
	//Get damage
	float Damage = currentHolder->DamageCalculator();
	
	//Get target
	std::cout << "Who are you using the weapon on?" << std::endl;
	
	//Check monsters in the room
	std::string monsterName;

	Monster* toAttack = currentHolder->GetCurrentArea()->GetMonster(monsterName);
	
	//Damage a target
	setterTarget->Harmed(Damage);
	
}

Weapon::~Weapon()
{
	std::cout << "Weapon class " << name << " destroyed." << std::endl;
	std::cout << std::endl;

}
