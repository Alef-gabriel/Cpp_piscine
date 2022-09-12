#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    std::string ptr[] = {"How lazy, I'm going to sleep a little", "Hello"};
    brain = new Brain(ptr);
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

void    Cat::makeSound() const
{
    std::cout << "Miau!" << std::endl;
}

Cat::Cat(const Cat& cat)
{
    *this = cat;
}

Cat&    Cat::operator=(const Cat& cat)
{
    this->brain = cat.brain;
    return *this;
}
