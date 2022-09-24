#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm: public Aform
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm & operator=(RobotomyRequestForm const & rr);
		bool execute(Bureaucrat const &executor) const;
		std::string getTarget(void) const;
};

std::ostream & operator<<(std::ostream & o, RobotomyRequestForm const & i);
