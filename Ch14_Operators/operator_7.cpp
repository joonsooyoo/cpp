#include <iostream>
#include <cstring>
#include <cctype>

/*

OPERATOR EXERCISE: operator overloading as non-member function

*/

class Mystring {

	friend bool operator==(const Mystring &lhs, const Mystring &rhs);
	friend Mystring operator-(const Mystring &obj);
	friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);

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
	: str(source.str) {
		source.str = nullptr;
	}
Mystring::~Mystring(){
	delete [] str;
}
//func
void display_string(Mystring m){
	std::cout << "string: " << m.get_str() << std::endl;
}

bool operator==(const Mystring &lhs, const Mystring &rhs){
	return (strcmp(lhs.str, rhs.str)==0);
}

Mystring operator-(const Mystring &obj){
	char *buff = new char[std::strlen(obj.str)+1];
	std::strcpy(buff, obj.str);
	for (size_t i{0};i<std::strlen(buff);++i)
		buff[i]=std::tolower(buff[i]);
	Mystring temp {buff};
	delete [] buff;
	return temp;
}

Mystring operator+(const Mystring &lhs, const Mystring &rhs){
	char *buff = new char[std::strlen(lhs.str)+std::strlen(rhs.str)+1];
	std::strcpy(buff, lhs.str);
	std::strcat(buff, rhs.str);
	Mystring temp {buff};
	delete [] buff;
	return temp;
}

int main() {

	Mystring ms1 = "JOON";
	Mystring ms2 = "JOON";
	Mystring ms3 = -ms1; //joon

	std::cout << (ms1==ms2) << std::endl; //cout:true(1)
	display_string(ms3); //cout: joon

	Mystring res = ms2 + " SOO";
	display_string(res); //cout: JOON SOO

	return 0;
}