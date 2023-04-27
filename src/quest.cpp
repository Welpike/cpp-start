#include <iostream>
#include <string>

#include "includes/quest.hpp"
#include "includes/queststatus.hpp"

Quest::Quest(const std::string& name, const std::string& description, int unitId) : _name(name), _description(description), _unitId(unitId)
{
    this->_status = QuestStatus::disabled;
}

void Quest::show() const noexcept
{
    std::cout << "---- Quest ----" << std::endl;
    std::cout << this->_name << "\n";
    std::cout << this->_description << std::endl;
}
