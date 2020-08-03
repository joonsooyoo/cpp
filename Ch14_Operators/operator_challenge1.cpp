#include <iostream>
#include <cstring>
#include <vector>
#include <cctype>

class Mystring {
private:
	char *str;
public:
	//no-arg constructor
	Mystring()
		: str(nullptr) {
			str = new char[1];
			*str = '\0';
		}
	//overloaded constructor: 1-arg cons
	Mystring(char *s)
		: str(nullptr) {
			if (s==nullptr) {
				str = new char[1];
				*str = '\0';
			} else {
				str = new char[std::strlen(s)+1];
				strcpy(str, s);
			}
			// std::cout << "1-arg cons" << std::endl;
		}
	//copy constructor
	Mystring(const Mystring &source)
		: str{nullptr} {
			str = new char[std::strlen(source.str)+1];
			strcpy(str, source.str);
			// std::cout << "copy cons" << std::endl;
		}
	//move constructor
	Mystring(Mystring &&source)
		: str(source.str) {
			source.str = nullptr;
			// std::cout << "mv cons" << std::endl;
		}
	//destructor
	~Mystring() {delete str;}
	//overloading operator= by member method (copy)
	Mystring operator=(const Mystring &rhs){ //s1.operator=(s2)
		if (this==&rhs)
			return *this;

		delete this->str;
		this->str = new char[std::strlen(rhs.str)+1];
		std::strcpy(this->str, rhs.str);
		// std::cout << "operator= overload" << std::endl;
		return *this;
	}
	//overloading operator= by member method (move)
	Mystring operator=(Mystring &&rhs) { //s1.operator=Mystring("hello")
		if (this == &rhs)
			return *this;
		delete [] this->str;
		this->str = rhs.str;
		rhs.str = nullptr;
		std::cout << "mv operator=" << std::endl;
		return *this; 
	}
	//overloading operator- by member method
	Mystring operator-(){ //s1.operator-()
		char *buff = new char[std::strlen(this->str)+1];
		std::strcpy(buff, this->str);
		for (size_t i{0};i<std::strlen(buff);++i)
			buff[i] = std::tolower(buff[i]);
		Mystring temp {buff};
		delete [] buff;
		return temp;
	}
	//overloading operator== by member method
	bool operator==(const Mystring &rhs){ //s1.operator==(s2)
		std::cout << (strcmp(this->str, rhs.str)==0) << std::endl;
		return (strcmp(this->str, rhs.str)==0);
	}
	//overloading operator+ by member method
	Mystring operator+(const Mystring &rhs){ //s1.operator+(s2)
		char *buff = new char[std::strlen(this->str)+std::strlen(rhs.str)+1];
		std::strcpy(buff, this->str);
		std::strcat(buff, rhs.str);
		Mystring temp {buff};
		delete [] buff;
		return temp;
	}
	//overloading stream operator: insertion <<
	friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs) { // std::cout << s1 << std::endl; returns string of s1
		os << rhs.str;
		return os;
	}
	//overloading stream operator: extraction >>
	friend std::istream &operator>>(std::istream &in, Mystring &rhs) { //std::cin >> (some object)
		char *buff = new char[1000];
		in >> buff;
		std::strcpy(rhs.str, buff); //rhs = Mystring {buff}
		delete [] buff;
		return in;
	}
	//method
	void show_string() {std::cout << str << std::endl;}


};
//function


int main() {

	std::cout << std::boolalpha;
	Mystring go;
	go.show_string(); //null
	Mystring go2 {"GODZILLA"};
	go2.show_string(); //GODZILLA
	Mystring go3 {go2};

	//vector
	std::vector <Mystring> v {};
	v.push_back(go2);
	v.at(0).show_string(); //GODZILLA
	//move cons
	v.push_back(Mystring("joon"));

	//=assignment
	Mystring go4 = go2;
	go4.show_string(); //GODZILLA
	//=assignment by move
	
	Mystring go_mov = "hello";
	
	// go_mov.show_string(); //hello
	//-operator
	go2 = -go2;
	go2.show_string(); //godzilla
	//==operator
	go4 == go3; //true
	//+operator
	Mystring result = go2 + " is a monster";
	result.show_string(); //godzilla is a monster
	//<< insertion operator
	std::cout << go3 <<std::endl; //GODZILLA
	
	Mystring go7;
	std::cin >> go7;
	std::cout << go7 << std::endl; //type: joon

	return 0;
}
