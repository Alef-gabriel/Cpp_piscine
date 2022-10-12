#include "../includes/AForm.hpp"

AForm::AForm( void ): _name("Empty"), _signed(false), _signGrade(150), _execGrade(150)
{
	std::cout << "Form created. " << *this;
}

AForm::~AForm()
{
	std::cout << "Destroyed Form" << *this;
}

AForm::AForm(std::string name, int signGrade, int execGrade):
_name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Form created. " << *this;
}

AForm::AForm(AForm const & AForm):
_name(AForm.getName()), _signGrade(AForm.getSignGrade()), _execGrade(AForm.getExecGrade())
{
	*this = AForm;
}

AForm &	AForm::operator=(AForm const & src)
{
	( const_cast<std::string&> (this->_name) ) = src.getName();
	this->_signed = src.getSigned();
	( const_cast<int&> (this->_signGrade) ) = src.getSignGrade();
	( const_cast<int&> (this->_execGrade) ) = src.getExecGrade();
	return (*this);
}

std::string	AForm::getName( void ) const
{
	return _name;
}

bool	AForm::getSigned( void ) const
{
	return _signed;
}

int	AForm::getExecGrade( void ) const
{
	return _execGrade;
}

int	AForm::getSignGrade( void ) const
{
	return _signGrade;
}

std::ostream & operator<<(std::ostream & os, AForm const & form)
{
	os << "Form " << form.getName() << ". Grade to sign : " << form.getSignGrade() << ". Grade to execute : " << form.getExecGrade() << ". Is signed : ";
	if (form.getSigned())
		os << "Yes." << '\n';
	else
		os << "No." << '\n';
	return os;
}

void	AForm::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
}

bool	AForm::execute(Bureaucrat const & executor) const
{
	if (!this->_signed)
	{
		throw AForm::FormNotSignedException();
		return false;
	}
	if (executor.getGrade() > this->getExecGrade())
	{
		throw AForm::GradeTooLowException();
		return false;
	}
	return true;
}
