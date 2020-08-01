/*

OPERATOR EXERCISE: constructing a class Mystring to work on

*/

#include <iostream>
#include <cstring>

class Mystring {
private:
	char *str;
public:
	//method
	void display() const;
	int get_length() const;
	const char *get_str() const;
	
	//constructor
	Mystring()
		: str{nullptr} {
			str = new char[1];
			*str = '\0';
		}
	
	Mystring(char *s)
		: str{nullptr} {
			if (s==nullptr){
				str = new char[1];
				*str = '\0';
			} else {
				str = new char[std::strlen(s)+1];
				std::strcpy(str, s);
			}
		}

	//copy constructor
	Mystring(const Mystring &source)
		: str{nullptr} {
			str = new char(std::strlen(source.str)+1);
			std::strcpy(str, source.str);
		}
	//destructor
	~Mystring() {
		delete str;
	}

};

int main() {
	
	Mystring empty;
	Mystring joon {"joon"};
	Mystring jae {joon};

	empty.display();
	joon.display();
	jae.display();

	return 0;
}