#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
}

Cat::~Cat()
{
}

void    Cat::makeSound()
{
    std::cout << "Miau!" << std::endl;
}