#pragma once
#include "Item.h"
class Potion :
    public Item
{
    //Make public
public:
    //Default constructor
    Potion();

    //Parameter constructor
    Potion(std::string newName, std::string newType, std::string newDescription, float newAttackBonus, float newDefenseBonus, float newSpeedBonus, float newHealthRestore);
    
    //Destructor
    ~Potion();

    //Getters

    //Setters

    //General functions
    void Use();

    //Make private
private:
    //Data
    float HealthRestore;

};

