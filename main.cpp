#include <iostream>
#include <string>

// tutorial (in french) : https://www.youtube.com/playlist?list=PLrSOXFDHBtfFKOzlm5iCBeXDTLxXdmxpx

int main()
{
    //std::cout << "Hello, world!" << std::endl;
    //std::cerr << "error" << std::endl;

    /*

    bool is_secure{};

    std::cout << is_secure << std::endl;  // -> 0
    std::cout << !is_secure << std::endl;  // -> 1

    //int number{42};
    float number{3.14};

    long long big_number = 14'850'000;

    std::cout << number << std::endl;*/

    /*char c{'A'};

    std::string welcome_msg{"Hello, World!"};

    std::cout << welcome_msg << std::endl;

    welcome_msg = "Hello, Welpike!";

    std::cout << welcome_msg << std::endl;

    const float PI{3.14};

    auto my_data{333};  // type of my_data = int

    using namespace std::literals;

    auto my_data_str{"Hello"s};  // type of my_data_str = std::string (and not default from C)*/

    // for inputs with no blanks
    /*std::cout << "Enter your first name : ";

    std::string user_firstname;
    std::cin >> user_firstname;

    std::cout << "Your first name : " << user_firstname << std::endl;*/

    // for inputs with blanks
    
    /*std::cout << "Enter your first and last names : ";

    std::string user_name;
    std::getline(std::cin, user_name);  // can get a 3rd arg = delimiter (default="\n")

    std::cout << "Your name : " << user_name << std::endl;*/

    /*std::cout << " Good : " << std::cin.good() << std::endl;
    std::cout << " Fail : " << std::cin.fail() << std::endl;
    std::cout << " Bad : " << std::cin.bad() << std::endl;*/

    // for ignore the chars that are in the 'cache' between 2 inputs
    // std:cin.ignore(255, '\n');

    


    return 0;
}
