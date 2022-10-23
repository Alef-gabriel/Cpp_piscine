#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
	MutantStack() : std::stack<T>() {}

	MutantStack(MutantStack const &obj) : std::stack<T>(obj) {}

	virtual ~MutantStack() {}

	MutantStack &operator=(MutantStack const &obj) {
		if (this != &obj)
		std::stack<T>::operator=(obj);
		return *this;
	}

	typedef typename std::deque<T>::iterator iterator;

	iterator begin() { return std::stack<T>::c.begin(); }

	iterator end() { return std::stack<T>::c.end(); }
};

#endif