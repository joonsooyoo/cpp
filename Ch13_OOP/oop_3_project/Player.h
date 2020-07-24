#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player {
private:
	// attributes
	std::string name;
	int hp {50};
	int mp {100};

public:
	// methods
	void set_name(std::string s);
	void get_name();

	void set_hp(int num);
	void get_hp();

	void set_mp(int num);
	void get_mp();

	void talk();
	void use_skill();

};

#endif