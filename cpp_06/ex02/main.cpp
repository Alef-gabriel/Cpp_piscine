#include <iostream>
#include <cstdlib>

class Base { public: virtual ~Base(void){}};
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void)
{
	int	num = (rand()%3);
	if (num == 0)
		return static_cast<Base *>(new A());
	else if (num == 1)
		return static_cast<Base *>(new B());
	else
		return static_cast<Base *>(new C());
}

void identify(Base* p)
{
	A	*a = dynamic_cast<A *>(p);
	B	*b = dynamic_cast<B *>(p);
	C	*c = dynamic_cast<C *>(p);

	if (a)
		std::cout << "A" << '\n';
	else if (b)
		std::cout << "B" << '\n';
	else if (c)
		std::cout << "C" << '\n';
	else
		std::cout << "Wtf is this?" << '\n';
}

void identify(Base& p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		std::cout << "A" << '\n';
		static_cast<void>(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " Not A" << '\n';
	}
	try
	{
		B	&b = dynamic_cast<B &>(p);
		std::cout << "B" << '\n';
		static_cast<void>(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " Not B" << '\n';
	}
	try
	{
		C	&c = dynamic_cast<C &>(p);
		std::cout << "C" << '\n';
		static_cast<void>(c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " Not C" << '\n';
	}
}

int	main()
{
	std::srand((unsigned int)time(NULL));
	Base *base = generate();
	std::cout << "Identification with pointer : ";
	identify(base);
	std::cout << std::endl;
	std::cout << "Identification with reference : " << std::endl;
	identify(*base);
	delete base;
	return (0);
}