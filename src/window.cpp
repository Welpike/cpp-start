#include <iostream>
#include <string>

#include "includes/window.hpp"

Window::Window(std::string t, int h = 600, int w = 800) : title(t), height(h), width(w)
{
}

void Window::run() const noexcept
{
    std::cout << "Running window" << std::endl;
}

std::string Window::getTitle() const
{
    return this->title;
}

void Window::setTitle(const std::string new_title)
{
    if(this->title == new_title)
    {
        throw new std::invalid_argument("The new title can not be the same that the actual title.");
    }
    this->title = new_title;
}
