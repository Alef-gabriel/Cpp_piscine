#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <cstdlib>
#include <limits>
#include <math.h>

class Convert
{
	private:
		std::string _str;
		int _target;
	public:
		Convert(void);
		explicit Convert(std::string str="");
		Convert(Convert const & src);
		Convert& operator=(Convert const & src);
		~Convert(void);
		std::string getStr(void) const;
		int getTarget(void) const;

		void checkInput(void);
		bool checkInt(void);
		bool checkChar(void);
		bool checkFloat(void);
		bool checkDouble(void);
		char convertToChar(void);
		int convertToInt(void);
		double convertToDouble(void);
		float convertToFloat(void);
		void display(void);
		class ImpossibleException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("impossible");
				}
		};

		class NotDisplayableException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("not displayable");
				}
		};

		class TypeNotFoundException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("type not found");
				}
		};

};

#endif