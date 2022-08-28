#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

using namespace std;
class Contact
{
	private:
		string	_firsName;
		string	_lastName;
		string	_phoneNumber;
		string	_nickName;
		string	_darkestSecret;
	public:
		Contact();
		~Contact();
		void	setFirstName(string firsName);
		string	getFirstName(void);
		void	setLastName(string lastName);
		string	getLastName(void);
		void	setPhoneNumber(string phoneNumber);
		string	getPhoneNumber(void);
		void	setNickName(string nickName);
		string	getNickName(void);
		void	setDarkestSecret(string nickName);
		string	getDarkestSecret(void);
};

string	input(string output);
#endif
