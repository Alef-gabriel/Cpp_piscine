#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		explicit ClapTrap(const std::string name);
		ClapTrap(const ClapTrap& clap);
		ClapTrap& operator=(const ClapTrap& clap);
		~ClapTrap();
		const std::string& GetName( void ) const;
		int GetHit( void ) const;
		int GetEnergy( void ) const;
		int GetAttackDamage( void ) const;
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;
};

#endif