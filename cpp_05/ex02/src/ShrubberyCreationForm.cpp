#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Aform("ShrubberyCreationForm", 145, 137), _target("Empty")
{
	std::cout << "For target : " << this->_target << ". Creation of " << *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Aform("ShrubberyCreationForm", 25, 5), _target(target)
{
	std::cout << "For target : " << this->_target << ". Creation of " << *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): Aform(src)
{
	this->_target = src.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "DESTRUCTION : " << *this;
}

bool	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (AForm::execute(executor))
	{
		std::string	line;
		std::string name = this->_target + "_shrubbery";
		std::ifstream	in("trees.txt");
		if (in)
		{
			std::ofstream	out(name.c_str());
			if (out)
			{
				while (getline(in, line))
					out << line << '\n';
				std::cout << name << " created file!" << '\n';
				out.close();
			}
			else
				std::cout <<"Error creating file" << '\n';
			in.close();
		}
		else
			std::cout <<"Error creating file" << '\n';
		return (true);
	}
	return (false);
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}

std::ostream & operator<<(std::ostream &o, ShrubberyCreationForm const & i)
{
	o << "AForm " << i.getName() << ". Grade to sign : " << i.getSignGrade() << ". Grade to execute : " << i.getExecGrade() << ". Is signed : ";
		if (i.getSigned())
			o << "Yes."<< '\n';
		else
			o << "No." << '\n';
	return (o);
}
