#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat: virtual public Animal
{
    public:
        Cat();
        ~Cat();
        void makeSound();
    protected:
        std::string type;
};
#endif