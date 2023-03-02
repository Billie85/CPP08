#include "Span.hpp"

int main()
{
	std::cout << "=======Normal Test=========" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "=======Crazy Test =========" << std::endl;
	Span sp2 = Span(10001);
	for (size_t i = 1; i < 10000; i++)
	{
		sp2.addNumber(i);
	}
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	return 0;
}