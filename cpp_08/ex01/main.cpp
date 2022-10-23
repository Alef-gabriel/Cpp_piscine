#include "Span.hpp"

int main() {
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << '\n';
	std::cout << sp.longestSpan() << '\n';
	std::cout << sp << '\n';
	return 0;
}

