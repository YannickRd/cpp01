// 42 Header here!

#include "Harl.hpp"

int	main(int argc, char* argv[])
{
	Harl harl_instance;

	if (argc == 2)
		harl_instance.filtered_complain(argv[1]);
	return (0);
}
