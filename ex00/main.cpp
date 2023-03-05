#include "easyfind.hpp"

/* push_back() は、C++の標準コンテナの一つである、 std::vector 、 std::deque 、 std::list 、 std::string 
などにおいて、新しい要素をコンテナの末尾に追加するためのメンバ関数です。 */


int main() 
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
	vec.push_back(6);

    try {
        std::vector<int>::iterator it = easyfind(vec, 3);
        std::cout << "Found value at position: " << std::distance(vec.begin(), it) << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::vector<int>::iterator it = easyfind(vec, 6);
        std::cout << "Found value at position: " << std::distance(vec.begin(), it) << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}