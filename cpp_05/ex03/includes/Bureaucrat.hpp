#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

	public:
		Bureaucrat( void );
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & obj);
		Bureaucrat & operator=(Bureaucrat const & obj);
		~Bureaucrat();
		std::string getName( void ) const;
		int getGrade( void ) const;
		void incrementGrade( void );
		void decrementGrade( void );
		void signForm(AForm & form);
		void executeForm(AForm const & form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade too low");
				}
		};

};

std::ostream & operator<<(std::ostream & ost, Bureaucrat const & obj);
#endif