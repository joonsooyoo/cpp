#include <iostream>

class Account{};

class Saving_Account: public Account {};

class Checking_Account: public Account {};

class Trust_Account: public Checking_Account {};