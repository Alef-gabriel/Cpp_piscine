#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Defalt constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name):ScavTrap( name )
{
	std::cout << "FragTrap Paramater constructor called" << std::endl;
	this->_hitPoints = (100);
	this->_energyPoints = (50);
	this->_attackDamage = (30);
}

FragTrap::FragTrap(const FragTrap& frag):ScavTrap()
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = frag;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "\033[1;32m" << GetName() << ": Positive high fives!!" << "\033[1;0m" << std::endl;
}


FragTrap&	FragTrap::operator=(const FragTrap& frag)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	this->_name = frag.GetName();
	this->_attackDamage = frag.GetAttackDamage();
	this->_energyPoints = frag.GetEnergy();
	this->_hitPoints = frag.GetHit();
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called " << this->GetName() <<std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (_energyPoints > 0)
	{
		std::cout << "\033[1;32m" << "FragTrap " << GetName();
		std::cout << "\033[1;31m" << " attacks " << target;
		std::cout << "\033[1;33m" << ", causing " << GetAttackDamage()
		<< " points of damage!" << "\033[0m" << std::endl;
		this->_energyPoints--;
		return ;
	}
	std::cout << "\033[1;32m" << "FragTrap "
	<< GetName() << " is out of energy!" << "\033[0m" << std::endl;
}

std::ostream& operator<<(std::ostream &outStream, FragTrap const &FragTrap)
{
	outStream << "\033[1;33m <<" << "\n------------FragTrap-Status------------\n";
	outStream << "FragTrap Name: \t" << FragTrap.GetName() << "\n";
	outStream << "\n\tHit Points: " << FragTrap.GetHit();
	outStream << "\n\tEnergy Points: " << FragTrap.GetEnergy();
	outStream << "\n\tAttack Damage: " << FragTrap.GetAttackDamage();
	outStream << "\n---------------------------------------\n" << "\033[0m";
	return outStream;
}

