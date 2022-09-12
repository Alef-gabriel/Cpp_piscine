#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
class Animal
{
    public:
        Animal(const Animal& obj);
        std::string getType() const;
        virtual void makeSound() const;
        virtual ~Animal();
    protected:
        std::string type;
        Animal();
};
#endif