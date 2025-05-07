// ADD 42 HEADER

#include "Zombie.hpp"
#include <new>

Zombie* newZombie( std::string name )
{
    Zombie*  MyZombie_p = new Zombie(name);

    MyZombie_p->announce();
    return (MyZombie_p);
}