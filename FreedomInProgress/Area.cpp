#include <iostream>

#include "Area.h"
#include "Player.h"

Area::Area()
	:
name(),
description()

{
}

void Area::Look()
{
	std::cout << "The current area is named " + name << std::endl;
	std::cout << " " + description << std::endl;

	//Loop things
	for (int i = 0; i < connectedAreas.size(); ++i)
	{
		std::cout << connectedAreas[i]->name<< std::endl;
	}

}

void Area::Go(std::string name, Player& ToGo)
{
	
	
}
