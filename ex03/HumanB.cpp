// 42 header here!

#include "HumanB.hpp"

HumanB::HumanB(std::string given_name) : name(given_name), weapon(NULL)
{
}

std::string HumanB::getName(void)
{
    return (this->name);
}

void        HumanB::setName(std::string given_name)
{
    this->name = given_name;
}

Weapon*     HumanB::getWeapon(void)
{
    return (this->weapon);
}

void        HumanB::setWeapon(Weapon& given_weapon)
{
    this->weapon = &given_weapon;
}

void        HumanB::attack(void)
{
    if (this->weapon)
    {
        std::cout   << this->getName() << " attacks with their "
                    << this->getWeapon()->getType() << std::endl;
    }
    else
        std::cout   << this->getName() << " cannot attack since it has "
                    << "no weapon" << std::endl;
}