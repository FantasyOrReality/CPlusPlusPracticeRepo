#include <iostream>

#include "Area.h"
#include "Player.h"

Area::Area()
	:
name(),
description()

{
}

void Area::Look(std::string name, std::string description, std::vector<Area*> connectedAreas)
{
	std::cout << "The current area is named " + name << std::endl;

}

void Area::Go(std::string name, Player& ToGo)
{
	
	
}
