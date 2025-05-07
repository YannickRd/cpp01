// 42 header to be added here!

#include "main.hpp"

void    exit_if_args_errors(int argc, char* argv[])
{
    if (argc != 4)
    {
        std::cerr << "Error: invalid number of arguments" << std::endl;
        exit (1);
    }
    if (!argv[1] || !argv[2] || argv[3])
    {
        std::cerr << "Error: at least one argument is null" << std::endl;
        exit (2);
    }
}