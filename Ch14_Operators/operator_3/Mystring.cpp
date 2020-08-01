#include <cstring>
#include <iostream>
#include "Mystring.h"

Mystring::Mystring() 
	: str{nullptr} {
		str = new char[1];
		*str = '\0';
	}
Mystring::Mystring(char *s)
	: str{nullptr} {
		if (s==nullptr) {
			str = new char[1];
			*str = '\0';
		} else {
			str = new char[std::strlen(s)+1];
			strcpy(str, s);
		}
	}
//copy constructor
Mystring::Mystring(const Mystring &source){
		str = new char[std::strlen(source.str)+1];
		strcpy(str, source.str);
}
//operator overload
Mystring &Mystring::operator=(const Mystring &rhs){
		if (this == &rhs)
			return *this;

		delete [] this->str;
		str = new char[(std::strlen(rhs.str)+1)];
		strcpy(this->str, rhs.str);
		return *this;
	}
//destructor
Mystring::~Mystring() {
		delete [] this->str;
}
//method
char *Mystring::get_string() {return str;}
