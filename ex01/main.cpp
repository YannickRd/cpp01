// 42 HEADER HERE!

#include "main.hpp"

int main(void)
{
    Zombie*     MyHorde;
    int         horde_size;
    std::string horde_name;

    horde_size = 9;
    horde_name = "Joe";
    std::cout   << "===========================TEST 1=========================="
                << std::endl;
    std::cout   << "... calling zombieHorde() with parameters: "
                << horde_size << ", " << horde_name << " ..." << std::endl;
    MyHorde = zombieHorde(horde_size, horde_name);
    for (int i = 0; i < horde_size; i++)
        MyHorde[i].announce();
    delete[] MyHorde;
    std::cout   << "===========================TEST 2=========================="
                << std::endl;
    horde_size = 1;
    horde_name = "John";
    std::cout   << "... calling zombieHorde() with parameters: "
                << horde_size << ", " << horde_name << " ..." << std::endl;
    MyHorde = zombieHorde(horde_size, horde_name);
    for (int i = 0; i < horde_size; i++)
        MyHorde[i].announce();
    delete[] MyHorde;
    std::cout   << "===========================TEST 3=========================="
                << std::endl;
    horde_size = 0;
    horde_name = "nobody";
    std::cout   << "... calling zombieHorde() with parameters: "
                << horde_size << ", " << horde_name << " ..." << std::endl;
    MyHorde = zombieHorde(horde_size, horde_name);
    for (int i = 0; i < horde_size; i++)
        MyHorde[i].announce();
    delete[] MyHorde;
    return (0);
}