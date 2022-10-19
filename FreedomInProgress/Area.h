#pragma once

#include <string>
#include <vector>

class Area
{
public:

	//Constructor
	Area();

	//Functions
	void Look();


	//Basic info
	std::string name;
	std::string description;
	std::vector<std::string> connectedAreas;


	//Advanced info
	std::vector<std::string> startingContents;
	std::vector<std::string> exits;

	//Current info
	std::vector<std::string> currentContents;


};

