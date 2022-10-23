#ifndef SPAN_CPP
#define SPAN_CPP

#include <limits>
#include <iostream>
#include <exception>
#include <list>
#include <algorithm>

class Span
{
	private:
		unsigned int	_lenght;
		std::list<int> _listNumber;
	public:
		Span(void);
		Span(Span const & obj);
		Span(unsigned int size);
		Span & operator=(Span const & obj);
		~Span(void);
		void addNumber(int num);
		int	shortestSpan(void);
		int	longestSpan(void);
		unsigned int getSize(void) const;

		class FullException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Span is full !");
				}
		};

		class SmallException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Span is too small !");
				}
		};
};
#endif