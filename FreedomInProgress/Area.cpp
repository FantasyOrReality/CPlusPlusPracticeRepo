#include <iostream>

#include "Area.h"
#include "Player.h"

Area::Area()
	: Thing("","")
	, currentPlayer(nullptr)
	, numOfConnectedAreas(0)
{
	std::cout << "Area class " << name << " constructed by default." << std::endl;

}

Area::Area(std::string newName, std::string newDescription, Player* newCurrentPlayer, int newNumbOfConnectedAreas)
	:Thing(newName, newDescription)
	, currentPlayer(newCurrentPlayer)
	, numOfConnectedAreas(newNumbOfConnectedAreas)
	
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

void Area::SetConnectedAreas(std::vector<Area*> setterConnectedAreas)
{
	connectedAreas = setterConnectedAreas;
}

void Area::AddConnectedArea(Area* areaToConnect)
{
	connectedAreas.push_back(areaToConnect);
}

void Area::PopulateAreaWithMonsters(Monster* sendMonster)
{
	ContainedMonsters.push_back(sendMonster);
}

Monster* Area::GetMonster(std::string name)
{
	return ;
}

void Area::Look()
{
	/*std::cout << "The current area is named " + name << std::endl;
	std::cout << " " + description << std::endl;

	//Loop things
	for (int i = 0; i < connectedAreas.size(); ++i)
	{
		std::cout << connectedAreas[i]->name << std::endl;
	}*/
}

void Area::Go(std::string name, Player& ToGo)
{
}



Area::~Area()
{
	std::cout << "Area class " << name << " destroyed." << std::endl;
	std::cout << std::endl;

}
