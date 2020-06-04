#include "StringWrapper.h"
#include "string.h"

StringWrapper::StringWrapper() {
	_pstr = new char[1];
	_len = 1;
}

StringWrapper::StringWrapper(char * pstr) {
	_len = strlen(pstr);
	_pstr = new char[_len + 1];

	for (int iter = 0; iter < _len; iter++)
		_pstr[iter] = pstr[iter];
}

StringWrapper::StringWrapper(const StringWrapper & pstr) {
	_len = pstr._len;
	_pstr = new char[_len + 1];
	
	for (int iter = 0; iter < _len; iter++)
		_pstr[iter] = pstr._pstr[iter];
}

StringWrapper::~StringWrapper() {
	delete[] _pstr;
}

std::ostream& operator << (std::ostream& os, const StringWrapper& pstr) {
	os << pstr._pstr;
	return os;
}

std::istream& operator >> (std::istream& is, StringWrapper& pstr) {
	char tmpStr[1024];
	is >> tmpStr;

	pstr._len = strlen(tmpStr);
	pstr._pstr = new char[pstr._len + 1];

	for (int iter = 0; iter < pstr._len + 1; iter++)
		pstr._pstr[iter] = tmpStr[iter];

	return is;
}

StringWrapper& StringWrapper::operator = (StringWrapper& pstr) {
	_len = pstr._len;
	_pstr = new char[_len + 1];

	for (int iter = 0; iter < _len + 1; iter++) {
		_pstr[iter] = pstr._pstr[iter];
	}

	return *this;
}