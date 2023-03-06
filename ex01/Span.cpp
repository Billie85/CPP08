#include "Span.hpp"

void Span::addNumber(size_t num)
{
	//配列がすでに最大サイズに達している場合
	if (_SpanSize == this->MaxArraySize)
		throw std::runtime_error("ERROR");
	this->_array[_SpanSize] = num;
	_SpanSize++;
}

size_t Span::shortestSpan()
{
	if (_SpanSize < 2)
		throw std::runtime_error("TOO SMAL SIZE 01");
	std::sort(_array, _array + _SpanSize);
	size_t shortest = _array[1] - _array[0];
	for (unsigned i = 2; i < _SpanSize; i++)
	{
		if (_array[i] - _array[i -1] < shortest)
		shortest = _array[i] - _array[i -1];
	}
	return (shortest);
}

size_t Span::longestSpan()
{
	if (_SpanSize < 2)
		throw std::runtime_error("TOO SMAL SIZE 02");
	size_t min = *std::min_element(_array, _array + _SpanSize);
	size_t max = *std::max_element(_array, _array + _SpanSize);
	return(max - min);
}


//========constructor==========
Span::Span(unsigned int N)
{
	std::cout << "default constructor" << std::endl;
	this->MaxArraySize = N;
	this->_SpanSize = 0;
	this->_array = new size_t [N];
}

Span::Span(const Span &src)
{
	std::cout << "coppy constructor" << std::endl;
	this->MaxArraySize = src.MaxArraySize;
	this->_SpanSize = src._SpanSize;
	this->_array = new size_t[src.MaxArraySize];

	std::copy(src._array, src._array +src._SpanSize, _array);
}

Span::~Span()
{
	delete [] this->_array;
}