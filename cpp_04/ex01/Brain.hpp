#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
    public:
        Brain();
        Brain(std::string arrayOfIdeas[]);
        Brain(const Brain& brain);
        Brain& operator = (const Brain& brain);
        void getIdeas( void );
        ~Brain();
    private:
        void assignArray(std::string arr[]);
        std::string ideas[100];
};

#endif