#include "Character.hpp"

Character::Character()
{
}

Character::~Character()
{
}

Character::Character(std::string name)
{
    _name = name;
}

Character::Character(Character const & obj)
{
    *this = obj;
}

std::string const & Character::getName()
{
    return _name;
}

Character& Character::operator=(Character const & obj)
{
    *this->_name = obj.getName();
    for (int i = 0; i < 4; i++)
    {
        this->unequip(i);
        this->_inventory[i] = obj._inventory[i];
    }
    
}

void    Character::unequip(int idx)
{
    if (this->_inventory[idx])
        delete this->_inventory[idx];
}