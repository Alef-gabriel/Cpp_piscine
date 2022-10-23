#include "Span.hpp"

void test() {
	Span sp = Span(5);
	std::list<int> list;

	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);

	std::cout << "\nTest range: " << '\n';
	std::cout << sp << '\n';
	std::cout << "Shortest span: " << sp.shortestSpan() << '\n';
	std::cout << "Longest span: " << sp.longestSpan() << '\n';
	std::cout << "Elements: ";
	std::cout << sp << '\n';
	std::cout << "End test range" << '\n';
}

int main() {
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << '\n';
	std::cout << sp.longestSpan() << '\n';
	test();
	return 0;
}

