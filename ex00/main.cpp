#include "easyfind.hpp"


int main() 
{
    std::vector<double> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
	vec.push_back(6);

    try {
        std::vector<double>::iterator it = easyfind(vec, 3);
        std::cout << "Found value at position: " << std::distance(vec.begin(), it) << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::vector<double>::iterator it = easyfind(vec, 6);
        std::cout << "Found value at position: " << std::distance(vec.begin(), it) << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
