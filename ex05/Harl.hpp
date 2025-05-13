// add 42 header here!!

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{

	public:
		Harl(void);
		void		complain(std::string level);

	private:
		std::string	levels[4];
		void		(Harl::*functions[4])(void);

		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
};

#endif
