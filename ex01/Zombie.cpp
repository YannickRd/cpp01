// 42 HEADER HERE!

#include "Zombie.hpp"

Zombie::Zombie( void )
{

}

Zombie::~Zombie( void )
{
    std::cout   << "Destructor called: "<<this->name << ' ' 
                << "has been destructed" << std::endl;
}

std::string Zombie::getName( void )
{
    return (this->name);
}

void    Zombie::setName( std::string const given_name )
{
    this->name = given_name;
}

void    Zombie::announce( void )
{
    std::cout   << getName() << ": " << "BraiiiiiiinnnzzzZ..."
                << std::endl;
}