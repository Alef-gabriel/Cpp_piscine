#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ScavTrap.hpp"

class FragTrap : public virtual ScavTrap
{
	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap& frag);
		FragTrap& operator=(const FragTrap& frag);
		~FragTrap();
		void attack(const std::string& target);
		void highFivesGuys(void);
};

std::ostream& operator<<(std::ostream &outStream, FragTrap const &FragTrap);
#endif