#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
class Animal
{
    public:
        Animal();
        Animal(const Animal& obj);
        std::string getType();
        ~Animal();

    protected:
        std::string type;
};
#endif