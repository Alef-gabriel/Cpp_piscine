#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMaterial.hpp"

class Character : ICharacter
{
    private:
        std::string _name;
        AMateria *_inventory[4];

    public:
        Character();
        ~Character();
        Character(std::string name);
        Character(Character const & obj);
        Character & operator=(Character const & obj);
        std::string const & getName();
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif