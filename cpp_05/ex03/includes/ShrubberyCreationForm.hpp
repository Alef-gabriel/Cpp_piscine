#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);
		virtual ~ShrubberyCreationForm();
		bool execute(Bureaucrat const &executor) const;
		std::string getTarget(void) const;
};

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const & i);
#endif