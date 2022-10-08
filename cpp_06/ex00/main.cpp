#include "Convert.hpp"

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Write : ./convert value" << std::endl;
		return (1);
	}
	Convert value(av[1]);
	value.display();
}