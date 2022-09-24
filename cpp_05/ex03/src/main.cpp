#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"

int main(void)
{
	std::cout << std::endl << "----Let the bureaucracy begin----" << std::endl << std::endl;

	Intern intern;
	AForm *formPresidential = intern.makeForm("presidential pardon", "the imposible future");
	AForm *formShrubbery = intern.makeForm("shrubbery creation", "intern_tree");
	AForm *formRobotomy = intern.makeForm("robotomy request", "my_boss");
	AForm *inexitentForm = intern.makeForm("piporopopopo", "nothing");
	Bureaucrat bureaucrat("Lucy", 1);
	bureaucrat.executeForm(*formPresidential);
	bureaucrat.signForm(*formPresidential);
	bureaucrat.executeForm(*formPresidential);
	bureaucrat.executeForm(*formShrubbery);
	bureaucrat.signForm(*formShrubbery);
	bureaucrat.executeForm(*formShrubbery);
	bureaucrat.executeForm(*formRobotomy);
	bureaucrat.signForm(*formRobotomy);
	bureaucrat.executeForm(*formRobotomy);
	delete formPresidential;
	delete formRobotomy;
	delete formShrubbery;
	delete inexitentForm;

	return (0);
}
