#include <iostream>
#include <string>
//#include <fstream>

//#include <cassert>

#include "includes/utils.hpp"

#include "includes/namespacetest.hpp"

#include "includes/point.hpp"

#include "includes/window.hpp"

// tutorial (in french) : https://www.youtube.com/playlist?list=PLrSOXFDHBtfFKOzlm5iCBeXDTLxXdmxpx

//
// compilation with many files : g++ -std=c++20 -Wall -Wextra *.cpp -o exec_name
// add -DNDEBUG for ignore asserts for the compilation
//


/*void sayHello(std::string name)
{
    std::cout << "Hello, " << name << std::endl;
}

int sum(int a, int b)
{
    return a + b;
}*/

/*
void createPlayer(std::string username, int level)
{
    assert(level > 0 && "The starting level can not be under 0.");

    std::cout << "Player created : " << username << " / lvl: " << level << std::endl;
}*/

// enum NaturalElement  // you can update the values here (enum Enum : <type>)
// {
//     earth,  // 0
//     air,    // 1
//     fire,   // 2
//     water   // 3
// };
//
// enum class NaturalElementClass
// {
//     earth,  // 0
//     air,    // 1
//     fire,   // 2
//     water   // 3
// };
// enum class smallint : int {};

/*struct Product
{
    std::string name;
    float price;
    bool available;
};*/

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

    /*int code{0};

    std::cout << "Enter a number : ";
    std::cin >> code;

    switch (code)
    {
        case 1:
            std::cout << "You enter 1" << std::endl;
            break;
        case 2:
        case 3:
            std::cout << "You enter 2 or 3" << std::endl;
            break;
        default:
            std::cout << "Unknown code" << std::endl;
    }*/

    /*std::string sentence = "Hello, world! how are you?";

    for(const auto i : sentence)  // for each i from sentence
    {
        std::cout << i << "\n";
    }*/


    /*sayHello("World");

    std::cout << sum(2, 3) << std::endl;*/

    //
    // important reference != pointer
    //

    // lambda
    // []() <specificators> -> <return_type> {};
    //

    /*auto function = []() -> void 
    { 
        std::cout << "Hello, lambas!" << std::endl; 
    };
    function();

    int n{42};

    std::cout << n << std::endl;*/
    
    /*
        var  -> passing by copy
        &var -> passing by reference

        =    -> passing all vars by copy
        &    -> passing all vars by reference
    */
    
    /*auto function2 = [&]() mutable -> void
    {
        n = 43;
    };

    function2();

    std::cout << n << std::endl;*/

    /*helloWorld();  // from utils.cpp
    */

    //assertion
    /*createPlayer("Welpike", 20);  // works
    createPlayer("Welpike", -20); // don't works
    */

    //exceptions

    /*try{
        throw std::invalid_argument("Raise Error");
    }
    catch(const std::invalid_argument& err)  //generic exception catcher before generics
    {
        std::cout << err.what() << std::endl;
    }
    catch(const std::exception& err)
    {
        std::cout << "An error occured." << std::endl;
    }*/

    //NaturalElement ne{water};
    /*NaturalElementClass ne{NaturalElementClass::water};

    std::cout << static_cast<int>(ne) << std::endl;*/

    // input
    /*std::ifstream f{"animals.txt"};  // std::ios::in

    std::string name{""};

    std::cout << f.is_open() << std::endl;

    if(f.is_open())
    {
        f >> name;
        std::cout << name << "\n";
        
        f >> name;
        std::cout << name << std::endl;
    }*/

    // output
    /*std::ofstream f{"data.txt"};  // std::ios::out

    if(f.is_open())
    {
        f << "Hello, files!";
    }*/

    //Namespacetest::test();

    /*using Product = struct Product;  // aliasing

    / struct / Product p{"Computer", 499.99, true};

    std::cout << "Prix : " << p.price << std::endl;

    p.price++;

    std::cout << "Prix : " << p.price << std::endl;*/

    /*
    struct : public datas (by default)
    class : private datas (by default)

    access level : public / private / protect
    */

    /*Point p{};

    Point p2{p};*/

    Window app{"App", 480, 640};

    std::cout << app.getTitle() << std::endl;
    app.setTitle("App window");
    std::cout << app.getTitle() << std::endl;

    app.run();

    return 0;
}
