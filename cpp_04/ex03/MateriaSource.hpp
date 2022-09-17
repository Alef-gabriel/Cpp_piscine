#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		std::string _name;
		AMateria *_inventory[4];

	public:
		MateriaSource();
		MateriaSource(MateriaSource const & m);
		virtual ~MateriaSource();
		MateriaSource & operator=(MateriaSource const & m);
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif