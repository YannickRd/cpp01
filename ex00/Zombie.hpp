// ADD 42 HEADER

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
public:
	Zombie(std::string);
	~Zombie(void);

	std::string getName(void) const;
	void setName(std::string const &);

	void announce(void);

private:
	std::string name;
};

#endif