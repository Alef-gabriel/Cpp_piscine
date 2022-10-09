#include "Character.hpp"

Character::Character() : _name("Empty")
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
	std::cout << "New Nameless Character created !" << '\n';
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Character " << this->getName() << " destroyed..." << '\n';
}

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
	std::cout << "New Character " << name << " created !" << '\n';
}

Character::Character(Character const & obj)
{
	*this = obj;
	std::cout << "Character " << this->getName() << " duplicated !" << '\n';
}

std::string const & Character::getName() const
{
	return _name;
}

Character& Character::operator=(Character const & obj)
{
	this->_name = obj.getName();
	for (int i = 0; i < 4; i++)
	{
		if (obj._inventory[i])
			this->_inventory[i] = obj._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

void	Character::unequip(int idx)
{
	if (this->_inventory[idx])
	{
		std::cout << this->getName() << " unequip index " << idx << " with materia " << this->_inventory[idx]->getType() << std::endl;
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if(_inventory[idx])
		_inventory[idx]->use(target);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4 && m != NULL; i++)
	{
		if (this->_inventory[i] == m){
			std::cout << "Character " << this->getName() << " already has this materia" << '\n';
			return ;
		}
	}

	int	j = 0;
	while (j < 4)
	{
		if (!this->_inventory[j])
			break ;
		j++;
	}

	for (int k = 0; k < 4 && j != 4; k++)
	{
		if (!this->_inventory[k]){
			this->_inventory[k] = m;
			std::cout << this->getName() << " equip index " << k << " with materia " << this->_inventory[k]->getType() << '\n';
			return ;
		}
	}
	std::cout << "Inventory is full !" << '\n';
}
