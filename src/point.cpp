#include <iostream>

#include "includes/point.hpp"

Point::Point()
{
    std::cout << "Creation of one point" << std::endl;
}

// Point::Point(const Point& p)
// {
//     p;
//     std::cout << "Copy point" << std::endl;
// }

Point::~Point()
{
    std::cout << "Destruction point" << std::endl;
}
