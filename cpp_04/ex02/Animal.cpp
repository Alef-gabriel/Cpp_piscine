#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
    type = "Animal";
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
    this->type = obj.type;
}

std::string Animal::getType() const
{
    return type;
}

void    Animal::makeSound() const
{
    std::cout << "..." << std::endl;
}
