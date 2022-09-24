#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const _name;
		bool _signed;
		int const	_signGrade;
		int const	_execGrade;
		AForm( void );
	protected:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Form : Grade too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Form : Grade too low");
				}
		};
		class FormNotSignedException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Form exception : Not signed");
				}
		};
	public:
		AForm(std::string name, int signGrade, int execGrade);
		AForm(AForm const & form);
		AForm & operator=(AForm const & src);
		virtual ~AForm();
		std::string getName( void ) const;
		int getSignGrade( void ) const;
		int getExecGrade( void ) const;
		bool getSigned( void ) const;
		void beSigned(Bureaucrat const & bureaucrat);
		virtual bool	execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator<<(std::ostream & os, AForm const & form);
#endif