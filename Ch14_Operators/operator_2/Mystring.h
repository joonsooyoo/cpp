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
	//method
	char *get_string();

};

#endif