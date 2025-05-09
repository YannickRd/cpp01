// 42 header here!

#include "HumanA.hpp"

HumanA::HumanA(std::string given_name, Weapon &given_weapon) : 
							name(given_name), weapon(given_weapon)
{
}

std::string HumanA::getName(void)
{
	return (this->name);
}

void HumanA::setName(std::string given_name)
{
	this->name = given_name;
}

Weapon &HumanA::getWeapon(void)
{
	return (this->weapon);
}

void HumanA::attack(void)
{
	std::cout << this->getName() << " attacks with their "
			  << this->getWeapon().getType() << std::endl;
}