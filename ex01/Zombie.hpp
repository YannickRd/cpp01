// 42 HEADER HERE!

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		std::string	getName(void);
		void		setName(std::string const);
		void		announce(void);

	private:
		std::string	name;
};

#endif