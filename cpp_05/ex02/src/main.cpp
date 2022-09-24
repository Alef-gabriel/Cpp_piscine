#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int main(void)
{
	std::cout << std::endl << "---------FORMS CREATION TEST---------" << std::endl << std::endl;

	PresidentialPardonForm form("Jack");
	ShrubberyCreationForm form2("my_beautyfull_ASCII_trees");
	RobotomyRequestForm form3("Someone");

	std::cout << std::endl << "---------SIGN AND EXECUTE TEST---------" << std::endl << std::endl;

	Bureaucrat	random;
	Bureaucrat	fred("Fred", 1);

	random.executeForm(form);
	fred.executeForm(form);
	fred.executeForm(form2);
	fred.executeForm(form3);

	random.signForm(form);
	std::cout << form << std::endl;
	fred.signForm(form);
	fred.signForm(form3);
	fred.signForm(form2);

	random.executeForm(form);
	fred.executeForm(form);
	fred.executeForm(form3);
	fred.executeForm(form2);

	std::cout << std::endl << "---------NEW INCREMENT DECREMENT CHECK TEST---------" << std::endl << std::endl;

	std::cout << random;
	std::cout << fred << std::endl;

	fred.incrementGrade();
	fred.incrementGrade();
	fred.incrementGrade();
	random.decrementGrade();
	random.decrementGrade();
	random.decrementGrade();

	std::cout << fred;
	std::cout << random << std::endl;

	return (0);
}
