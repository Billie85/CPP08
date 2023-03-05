#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <stdexcept>
#include <iostream>
#include <algorithm>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();


	const MutantStack &operator= (const MutantStack<T> &source);
	MutantStack();
	MutantStack(const MutantStack<T> &source);
	~MutantStack();
};

#include "MutantStack.tpp"

#endif