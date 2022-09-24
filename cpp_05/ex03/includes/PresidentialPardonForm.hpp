#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm & operator=(PresidentialPardonForm const & p);
		bool execute(Bureaucrat const & executor) const;
		std::string getTarget(void) const;
};

std::ostream & operator<<(std::ostream &o, PresidentialPardonForm const & i);
#endif