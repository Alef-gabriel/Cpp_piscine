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
	std::cout << _name << " grade " << _grade << " Bureaucrat called !" << '\n';
}

Bureaucrat::Bureaucrat(Bureaucrat const & obj)
{
	*this = obj;
	std::cout << "A copy of Bureaucrat " << this->_name << " with grade " << this->_grade << " was called!" << '\n';
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & obj)
{
	this->_name = obj.getName();
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

void	Bureaucrat::signForm(AForm & form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << "\033[1;31m" << *this << " couldnt sign " << form << " because " << e.what() << "\033[1;0m" << '\n';
	}
	std::cout << "\033[1;32m" << *this << " signed " << form << "\033[1;0m" << '\n';
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << this->_name << " executed " << form.getName() << std::endl;
}