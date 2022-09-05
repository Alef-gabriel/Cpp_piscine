#ifndef SCAVTRAP
#define SCAVTRAP
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap& clap);
		ScavTrap& operator=(const ScavTrap& clap);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate( void );
};

std::ostream& operator<<(std::ostream &outStream, ScavTrap const &scavTrap);
#endif