#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Defalt constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name): _name( name )
{
	std::cout << "Paramater constructor called" << std::endl;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 10;
}

ClapTrap::ClapTrap(const ClapTrap& clap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = clap;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& clap)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = clap.GetName();
	this->_attackDamage = clap.GetAttackDamage();
	this->_energyPoints = clap.GetEnergy();
	this->_hitPoints = clap.GetHit();
	return *this;
}

const std::string& ClapTrap::GetName( void ) const
{
	return _name;
}

int	ClapTrap::GetHit( void ) const
{
	return _hitPoints;
}

int	ClapTrap::GetAttackDamage( void ) const
{
	return _attackDamage;
}

int	ClapTrap::GetEnergy( void ) const
{
	return _energyPoints;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called " << this->GetName() <<std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0)
	{
		std::cout << "\033[1;32m" << "ClapTrap " << GetName();
		std::cout << "\033[1;31m" << " attacks " << target;
		std::cout << "\033[1;33m" << ", causing " << GetAttackDamage()
		<< " points of damage!" << "\033[0m" << std::endl;
		this->_energyPoints--;
		return ;
	}
	std::cout << "\033[1;32m" << "ClapTrap "
	<< GetName() << " is out of energy!" << "\033[0m" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		std::cout << "\033[1;31m" << "ClapTrap " << GetName();
		std::cout << " receive damage of " <<  amount;
		std::cout << " points of damage!" << "\033[0m" << std::endl;
		this->_hitPoints -= amount;
		return;
	}
	std::cout << "ClapTrap " << GetName() << " is out of hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints < 10)
	{
		std::cout << "\033[1;32m" << "ClapTrap " << GetName();
		std::cout << " repairs itself, " << amount << " hit points restored!" << "\033[0m" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
		return;
	}
	std::cout << "ClapTrap " << GetName() << " is out of energy!" << std::endl;
}