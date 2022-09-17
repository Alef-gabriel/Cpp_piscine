#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class ICharacter;

class Ice : public AMateria
{
	public :
		Ice(void);
		Ice(Ice const & ice);
		virtual ~Ice(void);
		Ice & operator=(Ice const & ice);
		Ice* clone() const;
		void use(ICharacter& target);
};
#endif