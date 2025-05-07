// 42 HEADER HERE!

#include "main.hpp"

int main(void)
{
    Zombie*     MyHorde;
    int         horde_size;
    std::string horde_name;

    horde_size = 9;
    horde_name = "Joe";
    std::cout   << "... calling zombieHorde() with the following parameters: "
                << horde_size << ", " << horde_name << " ..." << std::endl;
    MyHorde = zombieHorde(horde_size, horde_name);
    for (int i = 0; i < horde_size; i++)
        MyHorde[i].announce();
    std::cout << std::endl;
    delete[] MyHorde;
    horde_size = 1;
    horde_name = "John";
    std::cout   << "... calling zombieHorde() with the following parameters: "
                << horde_size << ", " << horde_name << " ..." << std::endl;
    MyHorde = zombieHorde(horde_size, horde_name);
    for (int i = 0; i < horde_size; i++)
        MyHorde[i].announce();
    std::cout << std::endl;
    delete[] MyHorde;
    horde_size = 0;
    horde_name = "nobody";
    std::cout   << "... calling zombieHorde() with the following parameters: "
                << horde_size << ", " << horde_name << " ..." << std::endl;
    MyHorde = zombieHorde(horde_size, horde_name);
    for (int i = 0; i < horde_size; i++)
        MyHorde[i].announce();
    std::cout << std::endl;
    delete[] MyHorde;
    return (0);
}