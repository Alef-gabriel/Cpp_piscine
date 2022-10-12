#include "Form.hpp"

Form::Form( void ): _name("Empty"), _signed(false), _signGrade(150), _execGrade(150)
{
	std::cout << "Form created. " << *this;
}

Form::~Form()
{
	std::cout << "Destroyed form" << *this;
}

Form::Form(std::string name, int signGrade, int execGrade):
_name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Form created. " << *this;
}

Form::Form(Form const & form):
_name(form.getName()), _signGrade(form.getSignGrade()), _execGrade(form.getExecGrade())
{
	*this = form;
}

Form &	Form::operator=(Form const & src)
{
	( const_cast<std::string&> (this->_name) ) = src.getName();
	this->_signed = src.getSigned();
	( const_cast<int&> (this->_signGrade) ) = src.getSignGrade();
	( const_cast<int&> (this->_execGrade) ) = src.getExecGrade();
	return (*this);
}

std::string	Form::getName( void ) const
{
	return _name;
}

bool	Form::getSigned( void ) const
{
	return _signed;
}

int	Form::getExecGrade( void ) const
{
	return _execGrade;
}

int	Form::getSignGrade( void ) const
{
	return _signGrade;
}

std::ostream & operator<<(std::ostream & os, Form const & form)
{
	os << "Form " << form.getName() << ". Grade to sign : " << form.getSignGrade() << ". Grade to execute : " << form.getExecGrade() << ". Is signed : ";
	if (form.getSigned())
		os << "Yes." << '\n';
	else
		os << "No." << '\n';
	return os;
}

void	Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}