#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Defalt constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name):
ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"),FragTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap Paramater constructor called" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}
void	DiamondTrap::whoAmI()
{
	std::cout << "\033[1;34m"<< "\n---------------------------------------\n"
	<< "\nWho am I\nDiamontTrap name: \t" << this->_name;
    std::cout << "\nClapTrap name: \t\t" << ClapTrap::_name << "\n"
	<< "\n---------------------------------------\n" << "\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamond):FragTrap()
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = diamond;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& diamond)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	this->_name = diamond.GetName();
	this->_attackDamage = diamond.GetAttackDamage();
	this->_energyPoints = diamond.GetEnergy();
	this->_hitPoints = diamond.GetHit();
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called " << this->GetName() <<std::endl;
}

std::ostream& operator<<(std::ostream &outStream, DiamondTrap const &DiamondTrap)
{
	outStream << "\033[1;33m" << "\n------------DiamondTrap-Status------------\n";
	outStream << "DiamondTrap Name: \t" << DiamondTrap.GetName() << "\n";
	outStream << "\n\tHit Points: " << DiamondTrap.GetHit();
	outStream << "\n\tEnergy Points: " << DiamondTrap.GetEnergy();
	outStream << "\n\tAttack Damage: " << DiamondTrap.GetAttackDamage();
	outStream << "\n---------------------------------------\n" << "\033[0m";
	return outStream;
}

