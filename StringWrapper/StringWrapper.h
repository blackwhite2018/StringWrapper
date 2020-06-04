#ifndef STRINGWRAPPER_H
#define STRINGWRAPPER_H
#include <iostream>

class StringWrapper
{
	int _len;
	char * _pstr;

	public:
		StringWrapper();
		StringWrapper(char*);
		StringWrapper(const StringWrapper& pstr);
		~StringWrapper();

		friend std::istream & operator >> (std::istream & is, StringWrapper & pstr);
		friend std::ostream & operator << (std::ostream & os, const StringWrapper & pstr);

		StringWrapper& operator = (StringWrapper& pstr);
};

#endif
