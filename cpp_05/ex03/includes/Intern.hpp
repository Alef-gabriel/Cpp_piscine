#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class Intern
{
	public :
		Intern(void);
		Intern(Intern const & src);
		~Intern(void);

		Intern & operator=(Intern const & rhs);

		AForm	*makeForm(std::string name, std::string target);

};

#endif