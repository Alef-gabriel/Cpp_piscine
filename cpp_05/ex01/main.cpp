#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "*********HEAP STACK TEST*********" << '\n' << '\n';

	Bureaucrat random;
	Bureaucrat *fred = new Bureaucrat("fred", 45);
	Bureaucrat peter("peter", 1);
	std::cout << '\n' << random << '\n';
	std::cout << *fred << '\n';
	std::cout << peter << '\n';

	std::cout << "*********COPY DEEP TEST*********" << '\n' << '\n';

	Bureaucrat *fredCopy = new Bureaucrat(*fred);
	std::cout << *fredCopy;
	delete fred;
	std::cout << *fredCopy;
	delete fredCopy;

	std::cout << '\n' << "*********HI LOW CREATION GRADES TEST*********" << '\n' << '\n';

	try
	{
		Bureaucrat louise("louise", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat mary("mary", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << '\n' << "*********INCREMENT DECREMENT TEST*********" << '\n' << '\n';

	std::cout << peter;
	try
	{
		peter.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << peter;
		try
	{
		peter.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << peter << '\n';

	std::cout << random;
	try
	{
		random.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << random;
	try
	{
		random.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << random << '\n';

	return (0);
}