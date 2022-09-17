#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class ICharacter;

class Cure : public AMateria
{
	public :
		Cure(void);
		Cure(Cure const & cure);
		virtual ~Cure(void);
		Cure & operator=(Cure const & cure);
		Cure* clone() const;
		void use(ICharacter& target);
};

#endif