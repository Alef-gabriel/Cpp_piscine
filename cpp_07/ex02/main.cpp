#include <iostream>
#include <cstdlib>
#include "Array.hpp"

int main(int, char**)
{
	const int max_value = 42;
	Array<int> empty;

	Array<int> numbers(max_value);
	int* mirror = new int[max_value];

	for (int i = 0; i < max_value; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	Array<int> tmp = numbers;
	Array<int> test(tmp);

	try
	{
		numbers[max_value] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	srand(time(NULL));
	for (int i = 0; i < max_value; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;

	Array<int>	arr1(3);

	arr1[1] = 42;
	//PRINT
	for (int i = 0; i < 3; i++)
		std::cout << arr1[i] << std::endl;
	return 0;
}
