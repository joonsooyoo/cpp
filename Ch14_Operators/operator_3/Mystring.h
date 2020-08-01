#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring{
private:
	char *str;
public:
	//constructor
	Mystring();
	Mystring(char *s);
	//copy constructor
	Mystring(const Mystring &source);
	//destructor
	~Mystring();
	//operator overloading
	Mystring &operator=(const Mystring &rhs);
	//method
	char *get_string();

};

#endif