// Section 10
// Challenge - 
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string plaintext {};
    string ciphertext {};
    
    // basic testing
    cout << "size of alphabet: " << alphabet.size() << endl;
    cout << "size of key: " << key.size() << endl;
    cout << "================================\n" << endl;;
	// plaintext
    cout << "to you (only): write your message: " << endl;
    
    getline(cin, plaintext);
    cout << "\nto you (only): your plaintext message is\n" << plaintext << endl;

    // error checking
    // cout << "plaintext.size(): " << plaintext.size() << endl;
    // cout << "ciphertext: " << ciphertext << endl;
    // cout << "plaintext.at(1): " << plaintext.at(1) << endl;
    // cout << "typeid(plaintext.at(1)).name(): " << typeid(plaintext.at(1)).name() << endl;

    // encrypt process
    for (size_t i{0};i<plaintext.size();++i){
    	for (size_t j{0}; j<alphabet.size(); ++j){
    		if (plaintext.at(i)==alphabet.at(j))
    			ciphertext.push_back(key.at(j));
    		else if (plaintext.at(i) == ' ') // considering space
    			ciphertext.push_back(' ');
    	}
    }

    // ciphertext
    cout << "\nto your friend (only): your friend sent the following: " << endl;
    cout << ciphertext << endl;

    cout << endl;

    return 0;
}
