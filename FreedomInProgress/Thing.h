#pragma once

#include <string>

class Thing
{
public:
	//Default constructor
	Thing();

	//Parameter constructor
	Thing(std::string newName, std::string newDescription);

	//Functions
	virtual void Look() = 0;


	//Destructor
	~Thing();


protected:
	//Data
	std::string name;
	std::string description;



};

