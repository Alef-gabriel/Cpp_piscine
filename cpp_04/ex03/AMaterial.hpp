#ifndef AMATERIAL_HPP
#define AMATERIAL_HPP
#include <iostream>

class AMateria
{
    protected:
		  std::string	_type;

    public:
        AMateria();
        AMateria(AMateria const & materia);
        AMateria(std::string const & type);
        virtual ~AMateria();

        AMateria & operator=(AMateria const & materia)
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};
#endif