#include <iostream>

#include "includes/unit.hpp"

Unit::Unit(int id, const std::string& name) noexcept : _id(id), _name(name)
{
}

int Unit::getId() const noexcept
{
    return this->_id;
}

std::string Unit::getName() const
{
    return this->_name;
}
