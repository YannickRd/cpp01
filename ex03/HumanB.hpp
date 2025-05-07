// 42 header here!

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

#include <string>
#include <iostream>

class   HumanB
{
    public:
        HumanB(std::string);
        ~HumanB(void);
        std::string getName(void);
        void        setName(std::string);
        Weapon*     getWeapon(void);
        void        setWeapon(Weapon&);
        void        attack(void);
    private:
        std::string name;
        Weapon*     weapon;
};

#endif