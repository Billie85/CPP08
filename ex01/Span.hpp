#ifndef SPAN_HPP
#define SPAN_HPP

#include <stdexcept>
#include <iostream>
#include <algorithm>

class Span
{
private:
	unsigned int MaxArraySize;
	size_t *_array;
	unsigned int _SpanSize;
public:
	size_t shortestSpan();
	size_t longestSpan();
	Span(unsigned int N);
	Span(const Span &src);
	~Span();
	void addNumber(size_t num);
};

#endif