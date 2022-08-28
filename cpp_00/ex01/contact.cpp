#include "contact.hpp"

using namespace std;

string	input(string output)
{
	string	inputString;

	cout << output;
	cin >> inputString;
	return inputString;
}

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::setFirstName(string afirstName)
{
	_firsName = afirstName;
}

string	Contact::getFirstName(void)
{
	return _firsName;
}

void	Contact::setLastName(string lastName)
{
	_lastName = lastName;
}

string	Contact::getLastName(void)
{
	return _lastName;
}

void	Contact::setPhoneNumber(string phoneNumber)
{
	_phoneNumber = phoneNumber;
}

string	Contact::getPhoneNumber(void)
{
	return _phoneNumber;
}

void	Contact::setNickName(string nickName)
{
	_nickName = nickName;
}

string	Contact::getNickName(void)
{
	return _nickName;
}

void	Contact::setDarkestSecret(string darkestSecret)
{
	_darkestSecret = darkestSecret;
}

string	Contact::getDarkestSecret(void)
{
	return _darkestSecret;
}