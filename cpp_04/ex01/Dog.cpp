#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    std::string ptr[] = {"I want food! give me food!!"};
    brain = new Brain(ptr);
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

Dog::Dog(const Dog& d)
{
    *this = d;
}

Dog&    Dog::operator=(const Dog& dog)
{
    this->brain = dog.brain;
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "Au Au!" << std::endl;
}

void    Dog::getBrain()
{
    brain->getIdeas();
}