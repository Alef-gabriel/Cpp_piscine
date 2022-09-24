#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"

Intern::Intern(void)
{
	std::cout << "New Intern called !" << '\n';
}

Intern::Intern(Intern const & src)
{
	*this = src;
	std::cout << "Intern copied !" << '\n';
}

Intern::~Intern(void)
{
	std::cout << "Intern fired !" << '\n';
}

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string levels[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = 0;
	while(i < 3 && levels[i] != name)
		i++;
	switch (i)
	{
		case 0:
			std::cout << "Intern creates Shrubbery Creation Form." << '\n';
			return (new ShrubberyCreationForm(target));
		case 1:
			std::cout << "Intern creates Robotomy Request Form." << '\n';
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern creates Presidential Pardon Form." << '\n';
			return (new PresidentialPardonForm(target));
		default:
			std::cout << name << " is not a valid form." << '\n';
			return (NULL);
	}
	return (NULL);
}