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

    //Function for doing damage
    void Attacking();

    //Function for taking damage
    void Harmed(float Damage);

    //Getters
    std::string GetName();
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

