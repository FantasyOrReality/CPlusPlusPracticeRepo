#pragma once

#include <string>
#include <vector>

#include "Thing.h"

class Monster;

class Area : public Thing
{
public:
	//Classes
	class Player;

	//Default Constructor
	Area();

	//Parameter Constructor
	Area(std::string newName, std::string newDescription, Player* newCurrentPlayer, int newNumOfConnectedAreas);

	//Setter for number of connected areas
	void SetNumberOfConnectedAreas(int setNumOfConnectedAreas);

	//Getters
	int GetNumberOfConnectedAreas();//number of connected areas
	std::string GetName();

	//Setters
	//Setter for connected areas
	void SetConnectedAreas(std::vector<Area*> setterConnectedAreas);
	void AddConnectedArea(Area* areaToConnect);

	//Set up the contained monsters
	void PopulateAreaWithMonsters(Monster* sendMonster);

	Monster* GetMonster(std::string name);

	//Functions
	void Look();
	void Go(std::string name, Player& ToGo); //Change the current area
	
	
	//Destructor
	~Area();

private:
	//Basic info
	int numOfConnectedAreas;
	std::vector<Area*> connectedAreas;
	Player* currentPlayer;
	std::vector<Monster*> ContainedMonsters;


	//Advanced info
	std::vector<std::string> startingContents;

	//Current info
	std::vector<std::string> currentContents;


};

