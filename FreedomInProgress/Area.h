#pragma once

#include <string>
#include <vector>

class Area
{
public:

	//Basic info
	std::string name;
	std::string description;

	//Advanced info
	std::vector<std::string> startingContents;
	std::vector<std::string> exits;

	//Current info
	std::vector<std::string> currentContents;

};

