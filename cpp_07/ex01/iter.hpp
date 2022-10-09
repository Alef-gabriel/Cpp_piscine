#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void	iter(T const *arrAddr, size_t const arrLenght, void(*f) (T const &))
{
	for (size_t i = 0; i < arrLenght; i++)
		f(arrAddr[i]);

}

template <typename T>
void print(T const &val)
{
	std::cout << val << '\n';
}
#endif