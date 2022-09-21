#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << '\n' << "*********CREATION TEST*********" << '\n' << '\n';
	Bureaucrat	john;
	Bureaucrat	bil("bil", 45);
	Form		form42("42", 42, 42);
	Form		form777("777", 777, 777);
	Form		*form21 = new Form("21", 77, 61);

	std::cout << '\n' << "*********COPY AND DEEPNESS TEST*********" << '\n' << '\n';

	Form		form21Copy = Form(*form21);
	delete form21;
	std::cout << form21Copy;

	std::cout << '\n' << "*********HI LOW GRADES FORM CREATION TEST*********" << '\n' << '\n';

	try
	{
		Form		form777_1("777_1", 777, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form		form3_minus1("3_minus1", 777, -1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\n*********SIGNS TESTS*********\n\n" << '\n';

	std::cout << john << '\n';
	std::cout << bil << '\n';
	john.signForm(form42);
	john.signForm(form777);
	std::cout << form42;
	std::cout << form777;
	bil.signForm(form777);
	bil.signForm(form42);
	std::cout << form42;
	std::cout << form777;
	bil.incrementGrade();
	bil.incrementGrade();
	bil.incrementGrade();
	std::cout << bil;
	bil.signForm(form42);
	std::cout << form42;

	return (0);
}