#include <numeric>
#include "Span.hpp"

Span::Span() {
	this->_lenght = 0;
	this->_vecNumber = std::list<int>();
}

Span::Span(unsigned int n) {
	this->_lenght = n;
	this->_vecNumber = std::list<int>();
}

Span::Span(const Span &span) {
	*this = span;
}

Span::~Span() {
}

Span &Span::operator=(const Span &span) {
	if (this != &span) {
		this->_lenght = span._lenght;
		this->_vecNumber = span._vecNumber;
	}
	return *this;
}

void Span::addNumber(int number) {
	if (this->_vecNumber.size() == this->_lenght)
		throw FullException();
	this->_vecNumber.push_back(number);
}

int Span::shortestSpan() {
	if (this->_vecNumber.size() < 2) {
		throw SmallException();
	}
	std::list<int> sorted = this->_vecNumber;
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
	if (this->_vecNumber.size() < 2)
		throw SmallException();
	return std::abs(
		*std::max_element(this->_vecNumber.begin(), this->_vecNumber.end()) -
			*std::min_element(this->_vecNumber.begin(), this->_vecNumber.end()));
}

std::list<int>	Span::getListNumber(void) const
{
	return this->_vecNumber;
}

std::ostream & operator<<(std::ostream & ost ,Span const & obj)
{
	for (std::list<int>::iterator it = obj.getListNumber().begin(); it != obj.getListNumber().end(); it++) {
		ost << *it << " ";
	}
	return ost;
}