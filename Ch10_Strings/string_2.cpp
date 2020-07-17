#include <iostream>
#include <string>
using namespace std;

/*

STRING EXERCISE #2: a program that will be used in a digital library

*/

int main() {


	// journal entries
	string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};

    // //before
    // cout << "journal_entry_1: " << journal_entry_1 << endl;

    // string function "erase"
    journal_entry_1.erase(0, 6);

    // //after
    // cout << "journal_entry_1: " << journal_entry_1 << endl;
    // cout << "length of journal_entry_1: " << journal_entry_1.length() << endl;

    // swap before
    cout << "journal_entry_1: " << journal_entry_1 << endl;
    cout << "journal_entry_2: " << journal_entry_2 << endl;

    // operator used
    if (journal_entry_1 > journal_entry_2)
    	journal_entry_1.swap(journal_entry_2);

	// swap after
    cout << "journal_entry_1: " << journal_entry_1 << endl;
    cout << "journal_entry_2: " << journal_entry_2 << endl;

    return 0;

}