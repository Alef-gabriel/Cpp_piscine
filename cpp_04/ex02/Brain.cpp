#include "Brain.hpp"
#include <string>
#include <sstream>
#include <iomanip>

Brain::Brain(void)
{
	std::string index_str;
	int			index_int;
	std::stringstream	convert;

	std::cout << "New Brain created !" << std::endl;
	for (index_int = 0; index_int < 100; index_int++)
	{
		convert << index_int;
		index_str = convert.str();
		_ideas[index_int] = index_str;
		convert.str("");
	}
}

Brain::~Brain(void)
{
	std::cout << "Brain destroyed..." << std::endl;
}

Brain&  Brain::operator = (const Brain& brain)
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = brain._ideas[i];
	return (*this);
}

Brain::Brain(const Brain& brain)
{
	*this = brain;
}