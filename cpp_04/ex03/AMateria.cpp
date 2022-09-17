#include "AMateria.hpp"

AMateria::AMateria() : _type("Empty")
{
	std::cout << "AMateria " << this->_type << " created !" << '\n';
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria " << this->_type << " created !" << '\n';
	_type = type;
}

AMateria::~AMateria()
{
	std::cout << this->_type << " AMateria destroyed..." << '\n';
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

AMateria & AMateria::operator=(AMateria const & materia)
{
	this->_type = materia._type;

	return *this;
}

AMateria::AMateria(AMateria const & materia)
{
	*this = materia;
	std::cout << this->_type << " AMateria duplicated !" << '\n';
}

void    AMateria::use(ICharacter& target)
{
	(void)target;
}