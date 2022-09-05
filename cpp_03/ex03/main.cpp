#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamondTrap("Ultron");

	diamondTrap.attack("T-800");
	diamondTrap.guardGate();
	diamondTrap.highFivesGuys();
	diamondTrap.whoAmI();
	std::cout << diamondTrap << std::endl;
	return 0;
}