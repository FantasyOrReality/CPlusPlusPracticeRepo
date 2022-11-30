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
	Area(std::string newName, std::string newDescription, std::vector<Area*> newConnectedAreas, Player* newCurrentPlayer, std::vector<std::string> newStartingContents, std::vector<std::string> newCurrentContents);

	//Functions
	void Look();
	void Go(std::string name, Player& ToGo); //Change the current area

	//Basic info
	std::vector<Area*> connectedAreas;
	Player* currentPlayer;


	//Advanced info
	std::vector<std::string> startingContents;

	//Current info
	std::vector<std::string> currentContents;


};

