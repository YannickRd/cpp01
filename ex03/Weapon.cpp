// 42 header here!

#include "Weapon.hpp"

Weapon::Weapon(std::string provided_weapon) : type(provided_weapon)
{
}

Weapon::~Weapon(void)
{
}

const std::string   &Weapon::getType(void)
{
    std::string&    typeREF = this->type;

    return (typeREF);
}

void    Weapon::setType(std::string chosen_type)
{
    this->type = chosen_type;
}