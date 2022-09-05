#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Defalt constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap( name )
{
	std::cout << "ScavTrap Paramater constructor called" << std::endl;
	this->_hitPoints = (100);
	this->_energyPoints = (50);
	this->_attackDamage = (20);
}

ScavTrap::ScavTrap(const ScavTrap& scav) : ClapTrap()
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = scav;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "\033[1;34m" << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& scav)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->_name = scav.GetName();
	this->_attackDamage = scav.GetAttackDamage();
	this->_energyPoints = scav.GetEnergy();
	this->_hitPoints = scav.GetHit();
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called " << this->GetName() <<std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0)
	{
		std::cout << "\033[1;32m" << "ScavTrap " << GetName();
		std::cout << "\033[1;31m" << " attacks " << target;
		std::cout << "\033[1;33m" << ", causing " << GetAttackDamage()
		<< " points of damage!" << "\033[0m" << std::endl;
		this->_energyPoints--;
		return ;
	}
	std::cout << "\033[1;32m" << "ScavTrap "
	<< GetName() << " is out of energy!" << "\033[0m" << std::endl;
}

std::ostream& operator<<(std::ostream &outStream, ScavTrap const &scavTrap)
{
	outStream << "\033[1;33m <<" << "\n------------ScavTrap-Status------------\n";
	outStream << "ScavTrap Name: \t" << scavTrap.GetName() << "\n";
	outStream << "\n\tHit Points: " << scavTrap.GetHit();
	outStream << "\n\tEnergy Points: " << scavTrap.GetEnergy();
	outStream << "\n\tAttack Damage: " << scavTrap.GetAttackDamage();
	outStream << "\n---------------------------------------\n" << "\033[0m";
	return outStream;
}

