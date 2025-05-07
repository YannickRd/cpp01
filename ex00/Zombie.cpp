// ADD 42 HEADER

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie( std::string given_name ) : name(given_name)
{
 
}

Zombie::~Zombie( void )
{
    std::cout   << "Destructor called: "<<this->name << ' ' 
                << "has been destructed" << std::endl;
}

std::string Zombie::getName( void ) const
{
    return (this->name);
}

void    Zombie::setName( std::string const& given_name )
{
    this->name = given_name;
}

void    Zombie::announce( void )
{
    std::cout   << getName() << ": " << "BraiiiiiiinnnzzzZ..."
                << std::endl;
}