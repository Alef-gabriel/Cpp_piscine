#include "iter.hpp"
#include <iostream>


int	main(void)
{
	std::string	str[] = {"Salut, ", "ça ", "va ", "bien?"};
	int			tab[] = {1, 2, 3, 4, 5};
	// Awesome		tab2[5];

	// iter(tab2, 5, print);

	iter(str, 4, &print);
	iter(tab, 5, &print);

	iter(str, 3, &print);
	iter(tab, 4, &print);
	return (0);
}
