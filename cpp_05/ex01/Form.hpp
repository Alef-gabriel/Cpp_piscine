#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>

class Form
{
	private:
		std::string const _name;
		bool _signed;
		int const	_signGrade;
		int const	_executGrade;

	public:
		Form( void );
		~Form();

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

#endif