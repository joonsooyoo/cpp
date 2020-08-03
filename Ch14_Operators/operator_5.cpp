#include <iostream>

class Mystring {
private:
	char *str;
public:
	//cons
	Mystring();
	Mystring(char *s);
	//copy
	Mystring(const Mystring &source);
	//move
	Mystring(Mystring &&source);
	//operator=(copy)
	Mystring &operator=(Mystring &rhs);
	//operator=(move)
	Mystring &operator=(Mystring &&rhs);
	//operator-(lower_case)
	Mystring &operator-() const {
		char *buff = new char[std::strlen(str)+1];
		std::strcpy(buff, str);
		for (size_t i{0};i<std::strlen(buff);++i)
			buff[i] = std::tolower(buff[i]);
		Mystring temp {buff};
		delete [] buff;
		return temp;
	}



};


int main() {

	return 0;
}