#include "Character.hpp"

Character::Character() : _name("Empty")
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		this->unequip(i);
	}
}

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}

}

Character::Character(Character const & obj)
{
	*this = obj;
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
		this->unequip(i);
		this->_inventory[i] = obj._inventory[i];
	}
	return (*this);
}

void	Character::unequip(int idx)
{
	if (this->_inventory[idx])
		delete this->_inventory[idx];
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
			std::cout << "Character " << this->getName() << " already has this materia" << std::endl;
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
			std::cout << this->getName() << " equip index " << k << " with materia " << this->_inventory[k]->getType() << std::endl;
			return ;
		}
	}
	std::cout << "Inventory is full !" << std::endl;
}
