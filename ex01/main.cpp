// 42 HEADER HERE!

#include "main.hpp"

void	output_test_log(int i, int horde_size, std::string horde_name)
{
	std::cout << "=======================TEST " << i << "======================"
			  << std::endl;
	std::cout << "... calling zombieHorde() with parameters: "
			  << horde_size << ", " << horde_name << " ..." << std::endl;
}

void	assign_annouce_free(Zombie *MyHorde, int size, std::string name)
{
	MyHorde = zombieHorde(size, name);
	for (int i = 0; i < size; i++)
		MyHorde[i].announce();
	delete[] MyHorde;
}

int main(void)
{
	Zombie *MyHorde = NULL;
	int horde_size;
	std::string horde_name;
	int i = 1;

	horde_size = 9;
	horde_name = "Joe";
	output_test_log(i++, horde_size, horde_name);
	assign_annouce_free(MyHorde, horde_size, horde_name);

	horde_size = 1;
	horde_name = "John";
	output_test_log(i++, horde_size, horde_name);
	assign_annouce_free(MyHorde, horde_size, horde_name);

	horde_size = 0;
	horde_name = "nobody";
	output_test_log(i++, horde_size, horde_name);
	assign_annouce_free(MyHorde, horde_size, horde_name);

	return (0);
}