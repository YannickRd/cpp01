// 42 header here!

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

# include <string>
# include <iostream>

class HumanA
{
public:
	HumanA(std::string, Weapon &);

	std::string	getName(void);
	void		setName(std::string);
	Weapon		&getWeapon(void);

	void		attack(void);

private:
	std::string	name;
	Weapon		&weapon;
};

#endif