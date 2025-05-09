// 42 header here!

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	public:
		Weapon(std::string	provided_weapon);
		const std::string&	getType(void);
		void				setType(std::string);

	private:
		std::string			type;
};

#endif