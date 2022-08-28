#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "contact.hpp"
#include <iostream>

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_cont = 0;
		void	_getPhoneList(Contact contact, int index);
		string	_shorteningStr(string str);
		void	_getContact(Contact contact);
	public:
		PhoneBook();
		~PhoneBook();
		void	setContacts(void);
		bool	getPhoneBook(void);
		void	searchContact(void);
};

#endif