#pragma once

#include <string>
#include <vector>

class Area
{
public:
	//Classes
	class Player;

	//Constructor
	Area();

	//Functions
	void Look(std::string name, std::string description, std::vector<Area*> connectedAreas);
	void Go(std::string name, Player& ToGo); //Change the current area

	//Basic info
	std::string name;
	std::string description;
	std::vector<Area*> connectedAreas;
	Player* currentPlayer;


	//Advanced info
	std::vector<std::string> startingContents;

	//Current info
	std::vector<std::string> currentContents;


};

