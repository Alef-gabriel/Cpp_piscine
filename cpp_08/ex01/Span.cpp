#include <numeric>
#include "Span.hpp"

Span::Span() {
	this->_lenght = 0;
	this->_listNumber = std::list<int>();
}

Span::Span(unsigned int n) {
	this->_lenght = n;
	this->_listNumber = std::list<int>();
}

Span::Span(const Span &span) {
	*this = span;
}

Span::~Span() {
}

Span &Span::operator=(const Span &span) {
	if (this != &span) {
		this->_lenght = span._lenght;
		this->_listNumber = span._listNumber;
	}
	return *this;
}

void Span::addNumber(int number) {
	if (this->_listNumber.size() == this->_lenght)
		throw FullException();
	this->_listNumber.push_back(number);
}

int Span::shortestSpan() {
	if (this->_listNumber.size() < 2) {
		throw SmallException();
	}
	std::list<int> sorted = this->_listNumber;
	sorted.sort();

	int min = std::numeric_limits<int>::max();

	for (std::list<int>::iterator it = sorted.begin(); it != --sorted.end(); it++) {
		int diff = *++it - *--it;

		if (diff < min) {
		min = diff;
		}
	}
	return min;
}

int Span::longestSpan() {
	if (this->_listNumber.size() < 2)
		throw SmallException();
	return std::abs(
		*std::max_element(this->_listNumber.begin(), this->_listNumber.end()) -
			*std::min_element(this->_listNumber.begin(), this->_listNumber.end()));
}
