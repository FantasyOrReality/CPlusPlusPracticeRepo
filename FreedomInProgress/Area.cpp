#include <iostream>

#include "Area.h"
#include "Player.h"

Area::Area()
	: Thing("","")
	, currentPlayer(nullptr)
{
	std::cout << "Area class " << name << " constructed by default." << std::endl;

}

Area::Area(std::string newName, std::string newDescription, Player* newCurrentPlayer)
	:Thing(newName, newDescription)
	, currentPlayer(newCurrentPlayer)
	
{
	std::cout << "Area class " << name << " constructed with parameters." << std::endl;

}

void Area::SetNumberOfConnectedAreas(int setterNumOfConnectedAreas)
{
	numOfConnectedAreas = setterNumOfConnectedAreas;
}

int Area::GetNumberOfConnectedAreas()
{
	return numOfConnectedAreas;
}

std::string Area::GetName()
{
	return name;
}

void Area::SetConnectedAreas(std::vector<Area*> connectedAreas)
{
	
}


/*void Area::Look()
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
	
	
}*/



Area::~Area()
{
	std::cout << "Area class " << name << " destroyed." << std::endl;
	std::cout << std::endl;

}
