#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("Unnamed"), _grade(150)
{
	std::cout << "Unnamed grade 150 Bureaucrat called !" << '\n';
}

Bureaucrat::~Bureaucrat()
{
	std::cout << _name << " grade " << _grade << " Bureaucrat is fired !!" << '\n';
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << _name << " grade " << _grade << " Bureaucrat called !" << '\n';
}

Bureaucrat::Bureaucrat(Bureaucrat const & obj)
{
	*this = obj;
	std::cout << "A copy of Bureaucrat " << this->_name << " with grade " << this->_grade << " was called!" << '\n';
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & obj)
{
	( const_cast<std::string&> (this->_name) ) = obj.getName();
	this->_grade = obj.getGrade();
	return (*this);
}

int	Bureaucrat::getGrade( void ) const
{
	return _grade;
}

std::string	Bureaucrat::getName( void ) const
{
	return _name;
}

void	Bureaucrat::incrementGrade( void )
{
	_grade--;
	try
	{
		if (_grade < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		_grade++;
		std::cerr << e.what() << '\n';
	}
}

void	Bureaucrat::decrementGrade( void )
{
	_grade++;
	try
	{
		if (_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		_grade--;
		std::cerr << e.what() << '\n';
	}
}

std::ostream & operator<<(std::ostream & ost, Bureaucrat const & obj)
{
	ost << "Bureaucrat " << obj.getName() << ", bureaucrat grade " << obj.getGrade() << '\n';
	return (ost);
}