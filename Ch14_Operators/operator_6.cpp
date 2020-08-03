#include <iostream>
#include <cstring>
#include <cctype>

/*

OPERATOR EXERCISE: operator overloading (=,+,-)

*/

class Mystring {
private:
	char *str; 
public:
	//constructor
	Mystring();
	Mystring(char *str);
	//copy
	Mystring(const Mystring &source);
	//move
	Mystring(Mystring &&source);
	//destructor
	~Mystring();
	//operators
	Mystring &operator=(const Mystring &rhs);
	Mystring operator-();
	Mystring operator+(const Mystring &rhs);
	//method
	char *get_str(){return str;}
};
Mystring::Mystring()
	: str{nullptr} { // no-arg const
		this->str = new char[1];
		*this->str = '\0';
	}
Mystring::Mystring(char *str)
	: str{nullptr} { // 1-arg const
		if (str==nullptr){
			this->str = new char[1];
			*this->str = '\0';
		} else {
		this->str = new char[std::strlen(str)+1];
		strcpy(this->str, str);
		}
	} 
Mystring::Mystring(const Mystring &source) 
	: str(nullptr) {
		this->str = new char[std::strlen(source.str)+1];
		std::strcpy(this->str, source.str);
	}
Mystring::Mystring(Mystring &&source) 
	: str(source.str) {
		source.str = nullptr;
	}
Mystring::~Mystring(){
	delete [] str;
}
Mystring &Mystring::operator=(const Mystring &rhs){
	if (this==&rhs)
		return *this;
	delete [] this->str;
	this->str = new char[std::strlen(rhs.str)+1];
	std::strcpy(this->str, rhs.str);
	return *this;
}
Mystring Mystring::operator-(){ //-joon
	char *buff = new char[std::strlen(this->str)+1];
	strcpy(buff, this->str);
	for (size_t i{0};i<std::strlen(buff);++i)
		buff[i]=std::tolower(buff[i]);
	Mystring temp {buff};
	delete [] buff;
	return temp;
}
Mystring Mystring::operator+(const Mystring &rhs){ //joon + "cat"
	size_t buff_size = std::strlen(this->str) + std::strlen(rhs.str) + 1;
	char *buff = new char[buff_size];
	std::strcpy(buff, this->str);
	std::strcat(buff, rhs.str);

	Mystring temp {buff};
	delete [] buff;
	return temp;
}
//func
void display_string(Mystring m){
	std::cout << "string: " << m.get_str() << std::endl;
}


int main() {

	Mystring mys {"JOON"};
	display_string(mys);
	Mystring mys2;
	display_string(mys2);
	display_string(-mys);
	Mystring result = mys + "cat";
	display_string(result);

	return 0;
}