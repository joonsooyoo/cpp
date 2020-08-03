#include <iostream>
#include <cstring>

class Mystring {
private:
	char *str;
public:
	//constructor
	Mystring() 
		: str{nullptr} {
			str = new char[1];
			*str = '\0';
			std::cout << "no-arg constructor being called" << std::endl;
		}
	Mystring(char *s)
		: str{nullptr} {
			if (s==nullptr) {
				str = new char[1];
				*str = '\0';
				std::cout << "one-arg constructor w/ string being null-ptr being called" << std::endl;
			} else {
				str = new char[(std::strlen(s))+1];
				strcpy(str, s);
				std::cout << "one-arg constructor being called" << std::endl;
			}
		}
	//copy constructor::deep copy
	Mystring(const Mystring &source)
		: str{nullptr} {
			str = new char[(std::strlen(source.str)+1)];
			*str = *(source.str);
			std::cout << "string copied" << std::endl;
		}
	//move constructor::for efficiency::check
	Mystring(Mystring &&source){
		str = new char[std::strlen(source.str)+1];
		*str = *source.str;
		source.str = nullptr;
	}
	//operator= (copy)
	Mystring &operator=(Mystring &rhs){
		if (this == &rhs)
			return *this;

		delete [] this->str;
		str = new char[std::strlen(rhs.str)+1];
		strcpy(this->str, rhs.str);
		return *this;

		std::cout << "copy operator called" << std::endl;
	}
	//operator= (move)
	Mystring &operator=(Mystring &&rhs){
		if (this == &rhs)
			return *this;

		delete [] this-> str;
		
		this->str = rhs.str;
		rhs.str = nullptr;

		return *this;

		std::cout << "move operator called" << std::endl;
	}
	//operator- (lower)
	Mystring &operator-() const {
		char *buff = new char[std::strlen(str)+1];
		std::strcpy(buff, str);
		for (size_t i{0};i<std::strlen(buff);++i)
			buff[i] = std::tolower(buff[i]);
		Mystring temp {buff};
		delete [] buff;
		return temp;
	}
	//destructor
	~Mystring() {
		delete [] this->str;
		std::cout << "deleted" << std::endl;
	}
	//method
	char *get_string() {return str;}
	
};

int display_length(Mystring s) {return std::strlen(s.get_string());}

int main() {

	//no-arg constructor check
	Mystring mys; 
	//one-arg constructor check
	Mystring mys2 {"old school"}; 

	// std::cout << mys.get_string() << std::endl; //null
	// std::cout << mys2.get_string() << std::endl; //old school

	// std::cout << display_length(mys) << std::endl; //0
	// std::cout << display_length(mys2) << std::endl; //4 not 9

	mys = mys2;
	std::cout << mys.get_string() << std::endl; //old school

	Mystring mys3 {"JOON"};
	Mystring mys4;

	std::cout << mys3.get_string() << std::endl; //JOON
	mys4 = -mys3;
	std::cout << mys4.get_string() << std::endl; //joon
	

	return 0;
}