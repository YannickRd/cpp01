// 42 header to be added here!

#include "main.hpp"

void	exit_if_args_errors(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Error: invalid number of arguments" << std::endl;
		exit(1);
	}
	if (!argv[1] || !argv[2] || !argv[3])
	{
		std::cerr << "Error: at least one argument is null" << std::endl;
		exit(2);
	}
}

void	exit_if_empty_arg(std::string s1)
{
	if (s1.empty())
	{
		std::cerr << "Error: search string cannot be empty" << std::endl;
		exit (3);
	}
}

void	exit_if_cannot_open_in(std::string file_name, std::ifstream& ifs)
{
	if (!ifs.is_open())
	{
		std::cerr << "Error: could not open file " << file_name << std::endl;
		exit (4);
	}
}

void	exit_if_cannot_open_out(std::ofstream& ofs)
{
	if (!ofs.is_open())
	{
		std::cerr << "Error: output file couldn't be created" << std::endl;
		exit (5);
	}
}
