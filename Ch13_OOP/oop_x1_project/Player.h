#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player {
private:
	static int player_num;
	std::string name;
	double hp;
	double mp;
public:
	std::string get_name(); 
	static int get_player_num();

	Player(std::string name_val="mary", double hp_val=100, double mp_val=50);

	Player(const Player &source);
};


#endif