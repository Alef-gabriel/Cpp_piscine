#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "New Cure created !" << std::endl;
}

Cure::Cure(Cure const & cure) : AMateria("cure")
{
	*this = cure;
	std::cout << this->_type << " Cure duplicated !" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << this->_type << " Cure destroyed..." << std::endl;
}

Cure & Cure::operator=(Cure const & cure)
{
	(void)cure;
	return (*this);
}

Cure* Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << '\n'
	<< "\033[1;32m" << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣄⡀⠀⠀⠀⠀⠀⠀⣀⣀⣀" << '\n'
	<< "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⣿⣿⣆⠀⠀⠀⠀⢀⣿⣿⣿⡀"<< '\n'
	<< "⠀⢀⣀⣸⣿⣀⣀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⡇⠀"<< '\n'
	<< "⠀⠸⠿⢿⣿⠿⠿⠀⠀⠀⠀⠀⠻⣿⣿⣿⣿⠏⠀⠀⠈⠉⠉⣿⣿⣿⠋⠉⠁⠀"<< '\n'
	<< "⠀⠀⠀⠸⠿⠀⠀⠀⠀⠀⠀⣀⣤⣽⣿⣿⣯⣤⣄⠀⠀⠀⠀⠛⠛⠛⠀⠀⠀⠀"<< '\n'
	<< "⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⣰⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<< '\n'
	<< "⠀⠀⠀⠀⣠⣼⣿⣤⡄⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀"<< '\n'
	<< "⠀⠀⠀⠀⠉⢹⣿⠉⠁⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⢀⡀⠀⠀"<< '\n'
	<< "⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⣶⣿⣷⣶⠀"<< '\n'
	<< "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠚⠛⢻⣿⣿⣿⣿⣿⣿⡟⠛⠛⠀⠀⠀⠀⠉⠹⠏⠉⠀"<< '\n'
	<< "⠀⠀⠀⠀⠀⠀⠀⠀⢠⡄⠀⢸⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<< '\n'
	<< "⠀⠀⠀⠀⠀⠀⠀⠘⢻⡟⠃⠀⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<< '\n'
	<< "⠀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⠀⠀⠠⣼⣿⡄⠀⠀⠀⠀⠀⠀"<< '\n'
	<< "⠀⠀⠺⣿⠃⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⠀⠀⠀⠈⠉⠀⠀⠀⠀⠀⠀⠀"<< '\n'
	<< "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠛⠛⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	<< "\033[1;0m" <<'\n';
}