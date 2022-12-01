#pragma once

#include <string>

class Feature
{
public:
	//Default Constructor
	Feature();

	//Parameter constructor
	Feature(std::string newName, std::string newDescription);

	//Destructor
	~Feature();

private:

	//Basic info
	std::string name;
	std::string description;


};

