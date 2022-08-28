#include "phoneBook.hpp"

int main()
{
	PhoneBook	myPhoneBook;
	std::string	command;

	for (;;)
	{
		cin >> command;
		if (command == "add" || command == "ADD")
			myPhoneBook.setContacts();
		else if (command == "search" || command == "SEARCH")
		{
			if(myPhoneBook.getPhoneBook())
				myPhoneBook.searchContact();
			else
				cout << "Add one contact" << endl;
		}
		else if (command == "exit" || command == "EXIT")
			break ;
		else
			cout << "valid commands SEARCH, ADD, EXIT" << endl;
	}
	return (0);
}