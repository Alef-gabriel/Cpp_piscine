#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", 72, 45), _target("Empty")
{
	std::cout << "For target : " << this->_target << ". Creation of " << *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 25, 5), _target(target)
{
	std::cout << "For target : " << this->_target << ". Creation of " << *this;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src): AForm(src)
{
	this->_target = src.getTarget();
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "DESTRUCTION : " << *this;
}

bool	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (AForm::execute(executor))
	{
		std::srand((unsigned int)time(NULL));
		if (rand() % 2)
			std::cout << "BZZZZ BZZZZZ " << this->_target << " has been robotomized !" << '\n';
		else
			std::cout << "The " << this->_target << " robotomization failed..." << '\n';
		return (true);
	}
	return (true);
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return this->_target;
}

std::ostream & operator<<(std::ostream &o, RobotomyRequestForm const & i)
{
	o << "AForm " << i.getName() << ". Grade to sign : " << i.getSignGrade() << ". Grade to execute : " << i.getExecGrade() << ". Is signed : ";
		if (i.getSigned())
			o << "Yes."<< '\n';
		else
			o << "No." << '\n';
	return (o);
}
