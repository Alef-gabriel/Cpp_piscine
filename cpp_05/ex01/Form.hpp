#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const	std::string _name;
		bool	_signed;
		const int 	_signGrade;
		const int	_execGrade;

	public:
		Form( void );
		Form(std::string name, int signGrade, int execGrade);
		Form(Form const & form);
		Form & operator=(Form const & src);
		~Form();
		std::string getName( void ) const;
		int getSignGrade( void ) const;
		int getExecGrade( void ) const;
		bool getSigned( void ) const;
		void beSigned(Bureaucrat const & bureaucrat);
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
};

std::ostream & operator<<(std::ostream & os, Form const & form);
#endif