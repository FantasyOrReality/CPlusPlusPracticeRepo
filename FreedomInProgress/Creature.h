#pragma once

#include <string>

#include "Thing.h"
class Creature :
    public Thing
{
public:
    //Default constructor
    Creature();

    //Parameter constructor
    Creature(std::string newName, std::string newDescription, float newMaxhealth, float newCurrentHealth, float newBaseAttack, float newBaseDefense, float newBaseSpeed);

    //Functions
    //Function for printing creature stats
    void Look();

    //Function for gaining health
    void Heal();

    //Function for taking damage
    void Harmed();

    //Destructor
    ~Creature();

protected:
    //Data
    float maxHealth;
    float currentHealth;
    float baseAttack;
    float baseDefense;
    float baseSpeed;

};

