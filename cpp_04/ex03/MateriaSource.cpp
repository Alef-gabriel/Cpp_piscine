#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
	std::cout << "New MateriaSource created !" << '\n';
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "MateriaSource destroyed..." << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	*this = src;
	std::cout << "MateriaSource duplicated !" << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & m)
{
	for (int i = 0; i < 4; i++)
	{
		if (m._inventory[i])
			this->_inventory[i] = m._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout << "This Materia " << m->getType() << " is learnt !" << std::endl;
			return ;
		}
	}
	std::cout << "No more space to learn here..." << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4 && this->_inventory[i] != NULL; i++)
		if (this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	std::cout << "This " << type << " Materia doesn't exist..." << std::endl;
	return (NULL);
}
