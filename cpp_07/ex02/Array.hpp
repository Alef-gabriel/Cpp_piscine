#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array
{
	public:
		Array(void) : _len(0), _array(0) {}
		Array(unsigned const & len) : _len(len), _array(new T[len]()) {}
		Array(Array const & obj): _len(obj._len), _array(new T[obj._len]())
		{
			for (unsigned int i = 0; i < obj._len; i++)

				this->_array[i] = obj._array[i];
		}
		~Array(void)
		{
			if (this->_array)
				delete[] this->_array;
		}
		Array &operator=(Array const & src)
		{
			if (this == src)
				return *this;
			if (this->_len != 0)
				delete[] this->_array;
			this->_len = src._len;
			this->_array = new T[src._len];
			for (unsigned int i = 0; src._array[i]; i++)
				this->_array[i] = src._array[i];
			return *this;
		}
		T & operator[](int index)
		{
			if (this->_len == 0 || index < 0 || static_cast<unsigned int>(index) >= this->_len)
				throw OutOfRangeException();
			return (this->_array[index]);
		}
		const T & operator[](int index) const
		{
			if (this->_len == 0 || index < 0 || static_cast<unsigned int>(index) >= this->_len)
				throw OutOfRangeException();
			return (this->_array[index]);
		}
		class OutOfRangeException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Index Out Of Range");
				}
		};

	private:
		unsigned int	_len;
		T				*_array;
};

#endif