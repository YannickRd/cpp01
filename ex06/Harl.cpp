// 42 Header here!

#include "Harl.hpp"

Harl::Harl(void)
{
	levels_list[0] = "DEBUG";
	levels_list[1] = "INFO";
	levels_list[2] = "WARNING";
	levels_list[3] = "ERROR";

	function[0] = &Harl::debug;
	function[1] = &Harl::info;
	function[2] = &Harl::warning;
	function[3] = &Harl::error;
}

void Harl::filtered_complain(std::string level)
{
	int i = 0;

	for (; i < 4; i++)
		if (level == levels_list[i])
			break;
	switch (i)
	{
		case 0:
			(this->*Harl::function[0])();

		case 1:
			(this->*Harl::function[1])();

		case 2:
			(this->*Harl::function[2])();

		case 3:
			(this->*Harl::function[3])();
			break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]";
			std::cout << std::endl;
			break;
	}
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Debug messages contain contextual information. "
			  << "They are mostly used for problem diagnosis."
			  << std::endl;
	std::cout << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "These messages contain extensive information. They are helpful"
			  << " for tracing program execution in a production environment."
			  << std::endl;
	std::cout << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "Warning messages indicate a potential issue in the system. "
			  << "However, it can be handled or ignored."
			  << std::endl;
	std::cout << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "These messages indicate that an unrecoverable error has "
			  << "occurred. This is usually a critical issue that requires " 
			  << "manual intervention."
			  << std::endl;
	std::cout << std::endl;
}
