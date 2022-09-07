#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
}

Animal::~Animal()
{
}

Animal::Animal(const Animal& obj)
{
    this->type = obj.type;
}

std::string Animal::getType()
{
    return type;
}
