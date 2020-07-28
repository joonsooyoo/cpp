#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
#include <iostream>

class Player {
private:
	std::string name;
	double hp;
	double mp;
public:
	std::string get_name() const {return name;}
	void set_name(std::string name_val);

	Player(std::string name_val="Mary", double hp_val=100, double mp_val=50);
};

#endif