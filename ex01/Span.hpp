#ifndef SPAN_HPP
#define SPAN_HPP

#include <stdexcept>
#include <iostream>
#include <algorithm>

class Span
{
private:
	unsigned int MaxArraySize;
	int *_array;
	unsigned int _SpanSize;
public:
	int shortestSpan();
	int longestSpan();
	Span(unsigned int N);
	~Span();
	void addNumber(int num);
};

#endif