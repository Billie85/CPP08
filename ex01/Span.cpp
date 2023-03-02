#include "Span.hpp"

void Span::addNumber(int num)
{
	if (_SpanSize == this->MaxArraySize)
		throw std::runtime_error("ERROR");
	this->_array[_SpanSize] = num;
	_SpanSize++;
}

int Span::shortestSpan()
{
	if (_SpanSize < 2)
		throw std::runtime_error("TOO SMAL SIZE 01");
	std::sort(_array, _array + _SpanSize);
	int shortest = _array[1] - _array[0];
	for (unsigned int i = 2; i < _SpanSize; i++)
	{
		if (_array[i] - _array[i -1] < shortest)
		shortest = _array[i] - _array[i -1];
	}
	return (shortest);
}

int Span::longestSpan()
{
	if (_SpanSize < 2)
		throw std::runtime_error("TOO SMAL SIZE 02");
	int min = *std::min_element(_array, _array + _SpanSize);
	int max = *std::max_element(_array, _array + _SpanSize);
	return(max - min);
}

Span::Span(unsigned int N)
{
	this->MaxArraySize = N;
	this->_SpanSize = 0;
	this->_array = new int [this->MaxArraySize];
}

Span::~Span()
{
	delete [] this->_array;
}