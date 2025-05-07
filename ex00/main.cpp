// ADD 42 HEADER

#include "main.hpp"

int main( void )
{
    Zombie*     MyAllocatedZombie;
    std::string my_name = "Joe";
    std::string my_random_name = "Random zombie";

    std::cout   << "...now calling newZombie function with parameter " 
                << my_name << std::endl;
    MyAllocatedZombie = newZombie(my_name);
    std::cout   << "...now calling randomChump function with parameter "
                << my_random_name << std::endl;
    randomChump(my_random_name);
    delete MyAllocatedZombie;
    return (0);
}