#pragma once

#include <string>
#include <vector>

#include "Thing.h"

class Area : public Thing
{
public:
	//Classes
	class Player;

	//Default Constructor
	Area();

	//Parameter Constructor
	Area(std::string newName, std::string newDescription, Player* newCurrentPlayer);

	//Setter for number of connected areas
	void SetNumberOfConnectedAreas(int setNumOfConnectedAreas);

	//Getters
	int GetNumberOfConnectedAreas();//number of connected areas
	std::string GetName();
	//Setter for connected areas
	void SetConnectedAreas(std::vector<Area*> connectedAreas);

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

	//Advanced info
	std::vector<std::string> startingContents;

	//Current info
	std::vector<std::string> currentContents;


};

