#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*

OOP EXERCISE: basic structure of class and objects

*/

class Player{
    
    // attributes
    string name;
    int health;
    int xp;
    
    
    // methods
    void talk(string mssg);
    
};

class Account {

    // attributes
    string name {"Joon"};
    double balance;

    // methods
    void deposit(double);
    void withdraw(double);

};

int main() {
    
    Player Joon;
    Player Bin;
    Account Joon_account;
    Account Bin_account;

    Player players [] {Joon, Bin};
    Account accounts [] {Joon_account, Bin_account};

    vector <Player> player_vec {Joon};
    vector <Account> account_vec {Bin_account};
    player_vec.push_back(Bin);
    account_vec.push_back(Joon_account);
    
    // display
    cout << Joon_account.name << endl;

    Player *enemy {nullptr};
    enemy = new Player;
    
    delete enemy;
    
    return 0;
}