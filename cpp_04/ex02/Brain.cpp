#include "Brain.hpp"

Brain::Brain()
{
}

Brain::Brain(std::string arrayOfIdeas[])
{
    assignArray(arrayOfIdeas);
}

Brain::~Brain()
{
}

Brain&  Brain::operator = (const Brain& brain)
{
    assignArray((std::string *)brain.ideas);
    return *this;
}

Brain::Brain(const Brain& brain)
{
    *this = brain;
}

void    Brain::getIdeas( void )
{
    int size = ideas->length() / sizeof(std::string);
    int i = -1;
    while (i < size)
    {
        i++;
        std::cout << this->ideas[i] << '\n';   
    }
}

void Brain::assignArray(std::string arr[])
{
    int size = arr->length() / sizeof(std::string);
    int i = -1;
    while (i < size)
    {
        i++;
        this->ideas[i] = arr[i];
    }
}