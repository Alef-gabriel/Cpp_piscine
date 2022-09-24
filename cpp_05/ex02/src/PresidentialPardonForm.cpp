#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Aform("PresidentialPardonForm", 25, 5), _target("Empty")
{
	std::cout << "For target : " << this->_target << ". Creation of " << *this;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Aform("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "For target : " << this->_target << ". Creation of " << *this;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): Aform(src)
{
	this->_target = src.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "DESTRUCTION : " << *this;
}

bool	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (Aform::execute(executor))
	{
		std::cout << this->_target << " was forgiven for his mistakes !" << '\n';
		return (true);
	}
	return false;
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return this->_target;
}

std::ostream & operator<<(std::ostream &o, PresidentialPardonForm const & i)
{
	o << "AForm " << i.getName() << ". Grade to sign : " << i.getSignGrade() << ". Grade to execute : " << i.getExecGrade() << ". Is signed : ";
		if (i.getSigned())
			o << "Yes."<< '\n';
		else
			o << "No." << '\n';
	return (o);
}

