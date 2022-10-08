#include "Convert.hpp"

Convert::Convert(void)
{
}

Convert::Convert(std::string str) : _str(str), _target(0)
{
}

Convert::~Convert()
{
}

int	Convert::getTarget(void) const
{
	return _target;
}

Convert::Convert(Convert const & src)
{
	*this = src;
}

void Convert::checkInput(void)
{
	if (this->checkChar())
		this->_target = 0;
	else if (this->checkInt() || this->checkFloat() || this->checkDouble())
	{
		this->_target = 1;
	}
	else
		throw Convert::TypeNotFoundException();
}

Convert&	Convert::operator=(Convert const & src)
{
	this->_str = src.getStr();
	this->_target = src.getTarget();
	return (*this);
}

bool	Convert::checkChar(void)
{
	if(this->getStr().length() == 1 && !isdigit(this->getStr()[0]))
		return true;
	return false;
}

bool	Convert::checkInt(void)
{
	std::string num = this->getStr();
	int	i = 0;

	if (num[i] == '+' || num[i] == '-')
		i++;
	while (num[i] && isdigit(num[i]))
		i++;
	if (i == (int)num.length())
		return true;
	return false;
}
//TODO:valgrind
bool	Convert::checkFloat(void)
{
	std::string num = this->getStr();
	int	lenght = this->getStr().length();
	int	i = 0;
	int	dot = 0;

	if (this->getStr() == "-inff" || this->getStr() == "+inff" || this->getStr() == "nanf")
		return (true);
	if (num[i] == '+' || num[i] == '-')
		i++;
	while (num[i] && isdigit(num[i]))
	{
		if (num[i + 1] != 0 && num[i + 1] == '.')
		{
			i++;
			dot++;
		}
		i++;
	}
	if (i == lenght - 1 && dot == 1 && (num[lenght -1] == 'f' || isdigit(num[lenght -1])))
		return true;
	return false;
}

bool	Convert::checkDouble(void)
{
	std::string num = this->getStr();
	int	lenght = this->getStr().length();
	int	i = 0;
	int	dot = 0;

	if (this->getStr() == "-inf" || this->getStr() == "+inf" || this->getStr() == "nan")
		return (true);
	if (num[i] == '+' || num[i] == '-')
		i++;
	while (num[i] && isdigit(num[i]))
	{
		if (num[i + 1] != 0 && num[i + 1] == '.')
		{
			i++;
			dot++;
		}
		i++;
	}
	if (i == lenght - 1 && dot == 1 && (num[lenght -1] == 'f' || isdigit(num[lenght -1])))
		return true;
	return false;
}

char	Convert::convertToChar(void)
{
	long double	nbr;
	char		*ptr;

	if (this->_target == 0)
		return static_cast<char>(this->getStr()[0]);
	else
	{
		nbr = std::strtod(&this->getStr().c_str()[0], &ptr);
		if (static_cast<long long>(nbr) > std::numeric_limits<char>::max() || static_cast<long long>(nbr) < std::numeric_limits<char>::min())
			throw ImpossibleException();
		if (std::isinf(nbr) || std::isnan(nbr))
			throw ImpossibleException();
		if (!isprint(static_cast<char>(nbr)))
			throw NotDisplayableException();
		return (static_cast<char>(nbr));
	}
}

int	Convert::convertToInt(void)
{
	long double nbr;
	char	*ptr;

	if (this->_target == 0)
		return static_cast<int>(this->getStr()[0]);
	else
	{
		nbr = std::strtod(&this->getStr().c_str()[0], &ptr);
		if (static_cast<long long>(nbr) > std::numeric_limits<char>::max() || static_cast<long long>(nbr) < std::numeric_limits<char>::min())
			throw ImpossibleException();
		if (std::isinf(nbr) && std::isnan(nbr))
			throw ImpossibleException();
		return (static_cast<int>(nbr));
	}
}

float	Convert::convertToFloat(void)
{
	long double nbr;
	char	*ptr;

	if (this->_target == 0)
		return static_cast<float>(this->getStr()[0]);
	else
	{
		nbr = std::strtod(&this->getStr().c_str()[0], &ptr);
		if (std::isinf(nbr) && std::isnan(nbr))
			throw ImpossibleException();
		return (static_cast<float>(nbr));
	}
}

double	Convert::convertToDouble(void)
{
	long double nbr;
	char	*ptr;

	if (this->_target == 0)
		return static_cast<double>(this->getStr()[0]);
	else
	{
		nbr = std::strtod(&this->getStr().c_str()[0], &ptr);
		if (std::isinf(nbr) && std::isnan(nbr))
			throw ImpossibleException();
		return (static_cast<double>(nbr));
	}
}

void	Convert::display(void)
{
	try
	{
		checkInput();
	}
	catch (std::exception & e)
	{
		std::cout  << "char : " << e.what() << std::endl;
		return ;
	}
	try
	{
		char tmp = convertToChar();
		std::cout << "char : '" << tmp << "'" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout  << "char : " << e.what() << std::endl;
	}
	try
	{
		int tmp = convertToInt();
		std::cout << "int : " << tmp << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout  << "int : " << e.what() << std::endl;
	}
	try
	{
		float tmp = convertToFloat();
		std::cout.precision(1);
		std::cout << "float : " << std::fixed << tmp << "f" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout  << "float : " << e.what() << std::endl;
	}
	try
	{
		double tmp = convertToDouble();
		std::cout.precision(1);
		std::cout << "double : " << std::fixed << tmp << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout  << "double : " << e.what() << std::endl;
	}
}

std::string	Convert::getStr(void) const
{
	return this->_str;
}