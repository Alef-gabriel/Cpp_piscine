#include "ClapTrap.hpp"

int main()
{
	ClapTrap	clap("R2-D2");

	clap.attack("C-3PO");
	clap.takeDamage(8);
	clap.beRepaired(3);
	return 0;
}