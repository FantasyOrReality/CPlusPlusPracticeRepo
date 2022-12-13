#include <iostream>

#include "Player.h"
#include "Weapon.h"

Player::Player()
	: Creature("", "", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f)
	, currentWeapon(nullptr)
	, currentHelmet(nullptr)
	, currentBodyPiece(nullptr)
	, currentArea(nullptr)
{
	std::cout << "Player class " << name << " constructed by default." << std::endl;

}

Player::Player(std::string newName, std::string newDescription, float newMaxhealth, float newCurrentHealth, float newBaseAttack, float newBaseDefense, float newBaseSpeed, Weapon* newCurrentWeapon, Armour* newCurrentHelmet, Armour* newCurrentBodyPiece, Area* newCurrentArea)
	: Creature(newName, newDescription, newMaxhealth, newCurrentHealth, newBaseAttack, newBaseDefense, newBaseSpeed)
	, currentWeapon(newCurrentWeapon)
	, currentHelmet(newCurrentHelmet)
	, currentBodyPiece(newCurrentBodyPiece)
	, currentArea(newCurrentArea)

{
	std::cout << "Player class " << name << " constructed with parameters." << std::endl;

}

float Player::DamageCalculator()
{
	float attackDamage;
	float attackBonus;

	attackBonus = currentWeapon->GetAttackBonus();

	attackDamage = baseAttack*attackBonus;

	return attackDamage;
}

void Player::SetCurrentWeapon(Weapon* setterCurrentWeapon)
{
	currentWeapon = setterCurrentWeapon;
}

Player::~Player()
{
	std::cout << "Player class " << name << " destroyed." << std::endl;
	std::cout << std::endl;

}


