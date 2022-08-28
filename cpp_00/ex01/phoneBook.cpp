#include "phoneBook.hpp"
#include <iomanip>
#include <sstream>

using namespace std;
PhoneBook::PhoneBook()
{
	cout << "valid commands SEARCH, ADD, EXIT" << endl;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::setContacts(void)
{
	Contact aux;

	if (_cont < 8)
	{
		aux.setFirstName(input("First Name: "));
		aux.setLastName(input("Last Name: "));
		aux.setNickName(input("Nick Name: "));
		aux.setPhoneNumber(input("Phone Number: "));
		aux.setDarkestSecret(input("Darkest Secret: "));
		_contacts[_cont] = aux;
		_cont++;
	}
}

bool	PhoneBook::getPhoneBook(void)
{
	if (_cont > 0)
	{
		cout << setw(10) <<  _shorteningStr("Index") << "|";
		cout << setw(10) <<  _shorteningStr("First Name") << "|";
		cout << setw(10) <<  _shorteningStr("Last Name") << "|";
		cout << setw(10) <<  _shorteningStr("NickName") << "|" << endl;
		for (int i = 0; i < _cont; i++)
		{
			_getPhoneList(_contacts[i], i);
		}
		return true;
	}
	return false;
}

void	PhoneBook::_getPhoneList(Contact contact, int index)
{
	cout << setw(10) << index + 1 << "|";
	cout << setw(10) <<  _shorteningStr(contact.getFirstName()) << "|";
	cout << setw(10) <<  _shorteningStr(contact.getLastName()) << "|";
	cout << setw(10) <<  _shorteningStr(contact.getNickName()) << "|" << endl;

}

void	PhoneBook::_getContact(Contact contact)
{
	cout << "First Name: " << contact.getFirstName() << endl;
	cout << "Last Name: " << contact.getLastName() << endl;
	cout << "Nick Name: " << contact.getNickName() << endl;
	cout << "Phone Number: " << contact.getPhoneNumber() << endl;
	cout << "Darkest Secret: " << contact.getDarkestSecret() << endl;
}

string	PhoneBook::_shorteningStr(string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return	str;
}

void	PhoneBook::searchContact(void)
{
	int	index;
	string	str;

	cout << "Please, type a index" << endl;
	for (;;)
	{
		cin >> str;
		if (str.length() < 2 && str[0] > '0' && str[0] < '8')
		{
			index = stoi(str);
			if (index <= _cont)
			{
				index--;
				_getContact(_contacts[index]);
				break ;
			}
		}
		cout << "Please, type a valid index" << endl;
	}

}