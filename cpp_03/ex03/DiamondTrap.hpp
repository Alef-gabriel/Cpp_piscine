#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <ostream>

class DiamondTrap: virtual public FragTrap, virtual public ScavTrap
{
	public:
		DiamondTrap();
		explicit DiamondTrap(const std::string name);
		DiamondTrap(const DiamondTrap& diamond);
		DiamondTrap& operator=(const DiamondTrap& diamond);
		~DiamondTrap();
		void whoAmI();
	private:
		std::string _name;
};

#endif
