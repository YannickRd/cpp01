// 42 header here!

#include "Weapon.hpp"

Weapon::Weapon(std::string provided_weapon) : type(provided_weapon)
{
}

const std::string	&Weapon::getType(void)
{
	return (this->type);
}

void				Weapon::setType(std::string chosen_type)
{
	this->type = chosen_type;
}