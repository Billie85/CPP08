#include "MutantStack.hpp"
#include <iostream>


#include <iostream>
#include "MutantStack.hpp"


int main(void)
{
	MutantStack<int> intstack;
	intstack.push(8);
	intstack.push(10);
	intstack.push(9);
	intstack.push(1);
	intstack.push(7);
	std::cout << intstack.top() << std::endl;
	intstack.pop();//top delete
	std::cout << intstack.top() << std::endl;
	std::cout << intstack.size() << std::endl;//stack size
}

/* int main()
{
	MutantStack<int> mstack;
	mstack.push(17);
	mstack.push(5);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
} */
