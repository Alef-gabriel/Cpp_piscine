#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T>
void	swap (T &a, T &b) {
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(T &rh, T &lh)
{
	return ((rh > lh) ? lh : rh);
}

template <typename T>
T	max(T &rh, T &lh)
{
	return ((rh < lh) ? lh : rh);
}
#endif