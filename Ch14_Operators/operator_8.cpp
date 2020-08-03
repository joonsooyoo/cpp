#include <iostream>
#include <cstring>
#include <cctype>

/*

OPERATOR EXERCISE: stream insertion and extraction
<< insertion, >> extraction

*/

class Mystring {

friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
friend std::istream &operator>>(std::istream &is, Mystring &rhs);


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
	: str {source.str} {
		source.str = nullptr;
	}
Mystring::~Mystring(){
	delete [] str;
}
//func
std::ostream &operator<<(std::ostream &os, const Mystring &rhs){
	os << rhs.str;
	return os;
}
std::istream &operator>>(std::istream &is, Mystring &rhs){
	char *buff = new char[1000];
	is >> buff;
	rhs = Mystring {buff};
	delete [] buff;
	return is;
}


int main() {

	Mystring jae;
	std::cin >> jae;
	
	std::cout << jae << std::endl;

	return 0;
}