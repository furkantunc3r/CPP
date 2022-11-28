#include "easyfind.hpp"
#include <iostream>
#include <vector>



int main()
{
    std::vector<int>		a;
    a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	a.push_back(6);
	a.push_back(7);

    try
    {
        std::cout << easyfind(a, 1) << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << "Error " << e.what() << std::endl;
    }
    try
    {
        std::cout << easyfind(a, -2) << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << "Error " << e.what() << std::endl;
    }
    return 0;
}