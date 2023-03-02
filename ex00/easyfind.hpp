#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>
#include <vector>
#include <iostream>


template <typename T>
typename T::iterator easyfind(T &tmp, int value);

#include "easyfind.tpp"
#endif