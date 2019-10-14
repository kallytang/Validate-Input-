/*********************************************************************
** Project Name:	Fibonacci Numbers(Lab 10) 
** Authors:			Kally Tang
** Date:			6/9/2019
** Description:		Function validate input from user, will take two
**					integers as parameters, min and max and will 
**					reprompt user to enter a valid integer between 
**					min and max until user chooses a valid integer 
**					between min and max. Function will return
**					valid integer input. 
*********************************************************************/
#include<string>
#include<iostream>
#include<sstream>

unsigned int validateInput(unsigned int min, unsigned int max)
{
	char c;
	unsigned int option;
	std::string line;
	bool invalid = true; 

	//validate user input
	while(invalid ==true)
	{
		std::getline(std::cin, line);
		std::stringstream inputStream(line);

		if (!(inputStream >> option) ||
			((option < min) || (option > max)) ||
			(inputStream >> c))
		{
			std::cout << "Invalid input, please choose between "
				<< min << " or " << max << std::endl;
		}
		else
		{
			inputStream >> option; 
			invalid = false; 

		}
	}

	return option; 
}
