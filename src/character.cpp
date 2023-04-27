#include <iostream>

#include "includes/character.hpp"


Character::Character(int id, const std::string& name, int level) noexcept : Unit(id, name), _level(level)
{
}

int Character::getLevel() const
{
    return this->_level;
}
