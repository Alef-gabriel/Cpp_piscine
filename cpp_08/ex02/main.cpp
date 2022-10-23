#include "MutantStack.hpp"
#include <iostream>

int main() {
	MutantStack<int> mstack;
	mstack.push(42);
	mstack.push(21);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(22);
	mstack.push(13);
	mstack.push(115);

	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	return 0;
}
