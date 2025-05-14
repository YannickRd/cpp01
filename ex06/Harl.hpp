// 42 Header here!

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl
{
	public:
		Harl(void);
		void	filtered_complain(std::string level);

	private:
		std::string levels_list[4];
		void (Harl::*function[4])(void);

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
