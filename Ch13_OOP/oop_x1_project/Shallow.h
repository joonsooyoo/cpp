#ifndef _SHALLOW_H_
#define _SHALLOW_H_
#include <iostream>

class Shallow {
private:
	int *shal_ptr;
public:
	void set_data_value(int num);
	int get_data_value();
	//constructor
	Shallow(int num=1);
	//copy constructor
	Shallow(const Shallow &source);

};


#endif