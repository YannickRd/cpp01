// add 42 header here!!

#include "Harl.hpp"

Harl::Harl(void)
{
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";

	functions[0] = &Harl::debug;
	functions[1] = &Harl::info;
	functions[2] = &Harl::warning;
	functions[3] = &Harl::error;
}

void Harl::complain(std::string level)
{
	int	i = 0;
	for (; i < 4; i++)
		if (level == Harl::levels[i])
		{
			(this->*Harl::functions[i])();
			return ;
		}
	std::cout << "Error: wrong input" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "Debug messages contain contextual information. "
			  << "They are mostly used for problem diagnosis."
			  << std::endl;
}

void Harl::info(void)
{
	std::cout << "These messages contain extensive information. They are helpful"
			  << " for tracing program execution in a production environment."
			  << std::endl;
}

void Harl::warning(void)
{
	std::cout << "Warning messages indicate a potential issue in the system. "
			  << "However, it can be handled or ignored."
			  << std::endl;
}

void Harl::error(void)
{
	std::cout << "These messages indicate that an unrecoverable error has "
			  << "occurred. This is usually a critical issue that requires " 
			  << "manual intervention."
			  << std::endl;
}
