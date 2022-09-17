#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "New Ice created !" << std::endl;
}

Ice::Ice(Ice const & ice) : AMateria("ice")
{
	*this = ice;
	std::cout << this->_type << " Ice duplicated !" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << this->_type << " Ice destroyed..." << std::endl;
}

Ice & Ice::operator=(Ice const & ice)
{
	(void)ice;
	return (*this);
}

Ice* Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << '\n'
	<< "\033[1;34m" << "	                                                        ██" << '\n'
    << "                                          ██      ██      ██░░██" << '\n'
    << "                                        ██▓▓██  ██░░██  ██░░██" << '\n'
    << "                                    ▓▓▓▓▓▓████▓▓▓▓▒▒██▓▓░░██░░" << '\n'
    << "                                  ██▒▒▓▓████▓▓▒▒▓▓████░░▒▒██" << '\n'
    << "                              ████▒▒▒▒████▓▓▒▒██████░░▒▒██" << '\n'
    << "                            ██▒▒▒▒▒▒████▒▒▒▒██████▒▒▒▒████" << '\n'
    << "                        ████▒▒░░▒▒██░░▒▒▒▒██████▒▒▒▒████░░██" << '\n'
    << "                    ████▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒██████▒▒▒▒████  ██" << '\n'
    << "                  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒████▒▒▒▒▒▒████░░██" << '\n'
    << "                ██▒▒▒▒░░░░▒▒░░▒▒░░░░▒▒▒▒▒▒░░░░▒▒████▒▒██" << '\n'
    << "              ██░░▒▒░░░░▒▒░░▒▒░░░░▒▒▒▒▒▒▒▒░░▒▒████▒▒▒▒██" << '\n'
    << "            ▓▓▒▒▒▒░░░░░░░░░░░░▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒██▒▒░░██" << '\n'
    << "            ██░░░░░░  ░░  ░░  ░░░░░░░░▒▒▒▒░░▒▒██░░▒▒██" << '\n'
    << "            ██░░  ░░░░      ░░░░░░░░░░▒▒░░▒▒▒▒▒▒░░████" << '\n'
    << "          ██░░  ░░              ░░░░░░░░░░▒▒▒▒░░▒▒██░░██" << '\n'
    << "          ██░░░░░░                ░░░░░░▒▒▒▒▒▒▒▒████░░██" << '\n'
    << "          ██░░░░                    ░░▒▒▒▒▒▒▒▒▒▒██▒▒██" << '\n'
    << "          ██░░░░                  ░░░░░░░░▒▒▒▒▒▒░░▒▒██" << '\n'
    << "            ██░░                    ░░░░░░▒▒▒▒░░▒▒██" << '\n'
    << "            ██░░░░              ░░░░  ░░▒▒▒▒▒▒▒▒██" << '\n'
    << "            ██░░░░              ░░  ░░░░▒▒▒▒▒▒██" << '\n'
    << "              ██░░░░░░      ░░░░░░░░░░░░▒▒▒▒██" << '\n'
    << "                ██░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒██" << '\n'
    << "                  ▓▓▒▒▒▒▒▒░░░░░░▒▒▒▒▒▒▒▒██" << '\n'
    << "                    ██████▒▒▒▒▒▒▒▒██████" << '\n'
    << "                          ██▓▓████ " << "\033[1;0m" << '\n';
}
