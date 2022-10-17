#ifndef EASYFIND_CPP
#define EASYFIND_CPP

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>

class NotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Value not found !");
		}
};

template<typename T>
typename T::iterator easyfind(T &container, int lenght)
{
	typename T::iterator res = std::find(container.begin(), container.end(), lenght);
	if (res == container.end())
		throw NotFoundException();
	return res;
}
#endif