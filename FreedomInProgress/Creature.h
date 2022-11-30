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
    Creature();

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

