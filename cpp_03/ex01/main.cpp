#include "ScavTrap.hpp"

int main()
{
	ScavTrap scavTrap("C-3PO");

	std::cout << scavTrap << std::endl;

	scavTrap.attack("T-800");
	scavTrap.guardGate();

	std::cout << scavTrap << std::endl;
	return 0;
}