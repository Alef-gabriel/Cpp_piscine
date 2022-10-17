#include "easyfind.hpp"
#include <deque>
#include <list>

static void vectorTest(void)
{
	std::vector<int> intVector;

	for (int i = 0; i < 10; i++)
		intVector.push_back((i * 10) + i);
	std::cout << "find 11"  << std::endl;
	try
	{
		std::vector<int>::iterator valueIterator = easyfind(intVector, 11);
		std::cout << "found: " << *valueIterator << std::endl;
		std::cout << "at index: " << std::distance(intVector.begin(), valueIterator) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "find 1111"  << std::endl;
	try
	{
		std::vector<int>::iterator valueIterator = easyfind(intVector, 1111);
		std::cout << "found: " << *valueIterator << std::endl;
		std::cout << "at index: " << std::distance(intVector.begin(), valueIterator) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static void listTest(void)
{
	std::list<int> intList;

	for (int i = 0; i < 10; i++)
		intList.push_front(std::rand());
	intList.push_front(22);
	std::cout << "find 22"  << std::endl;
	try
	{
		std::list<int>::iterator valueIterator = easyfind(intList, 22);
		std::cout << "found: " << *valueIterator << std::endl;
		std::cout << "at index: " << std::distance(intList.begin(), valueIterator) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "find 1111"  << std::endl;
	try
	{
		std::list<int>::iterator valueIterator = easyfind(intList, 1111);
		std::cout << "found: " << *valueIterator << std::endl;
		std::cout << "at index: " << std::distance(intList.begin(), valueIterator) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	std::cout << "\n*****Vector Test*****\n"  << std::endl;
	vectorTest();
	std::cout << "\n*****List Test*****\n"  << std::endl;
	listTest();
}