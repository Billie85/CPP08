#include "MutantStack.hpp"

//========iterator============
template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return std::stack<T>::c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return std::stack<T>::c.end();
}

//=======operator============
template<typename T>
const MutantStack<T>& MutantStack<T>::operator= (const MutantStack<T>& source)
{
    static_cast<std::stack<T>&>(*this) = static_cast<const std::stack<T>&>(source);
    return (*this);
}

//=======constructor==========
template<typename T>
MutantStack<T>::MutantStack(){}



template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& source)
: std::stack<T>(source)
{}

template<typename T>
MutantStack<T>::~MutantStack(){}
