#include "Shallow.h"
#include <iostream>

Shallow::Shallow(int num){
	shal_ptr = new int;
	*shal_ptr = num;
	std::cout << "shallow for " << num << " created" << std::endl;
	std::cout << "---------------" << std::endl;
}

void Shallow::set_data_value(int num){
	*shal_ptr = num;
}

int Shallow::get_data_value(){
	return *shal_ptr;
}

Shallow::Shallow(const Shallow &source)
	: shal_ptr{source.shal_ptr} {};

