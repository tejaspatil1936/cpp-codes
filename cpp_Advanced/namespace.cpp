#include <iostream>
#include <typeinfo>
#include <vector>
#include <map>

int main()
{
    std::cout << "Type of std::cout: " << typeid(std::cout).name() << std::endl;
    std::cout << "Type of std::cin: " << typeid(std::cin).name() << std::endl;
    std::cout << "Type of std::string: " << typeid(std::string).name() << std::endl;
    std::cout << "Type of std::vector<int>: " << typeid(std::vector<int>()).name() << std::endl;
    std::cout << "Type of std::map<int, int>: " << typeid(std::map<int, int>()).name() << std::endl;
    return 0;
}
