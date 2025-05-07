// 42 header here!

#include "HumanB.hpp"

HumanB::HumanB(std::string given_name) : name(given_name)
{
}

HumanB::~HumanB(void)
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

}

void        HumanB::setWeapon(Weapon given_weapon)
{

}

void        HumanB::attack(void)
{
    std::cout   << this->getName() << " attacks with their "
                << this->getWeapon() << std::endl;
}