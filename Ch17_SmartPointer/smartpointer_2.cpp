#include <iostream>
#include <memory>
#include <vector>
#include <string>

class Cloud {
private: 
    double data;
public:
    Cloud(double data)
        : data{data} {std::cout << "Constructor Called:  " << data << std::endl;}
    ~Cloud() {std::cout << "Destructor Called: " << data << std::endl;}
    };

class Account {
    friend std::ostream &operator<<(std::ostream &os, const Account &rhs); 
protected:
    std::string name;
    double balance;
public:
    Account(std::string name, double balance)
        : name{name}, balance{balance} {};
    ~Account() {};    
    virtual void deposit() {};
};

class Saving: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Saving &rhs); 
protected:
    double int_rate {5};
public:
    Saving(std::string name, double balance, double int_rate=5);
    ~Saving() {};
    virtual void deposit() {
        std::cout << "Saving::Deposit" << std::endl;
    }
};

Saving::Saving(std::string name, double balance, double int_rate)
        : Account(name, balance), int_rate{int_rate} {};
    
std::ostream &operator<<(std::ostream &os, const Account &rhs){
    os << "\tAccount" << std::endl;
    os << "name: "<<rhs.name << " balance: " << rhs.balance;
    std::cout << std::endl;
    return os;
    }

std::ostream &operator<<(std::ostream &os, const Saving &rhs){
    os << "\tSaving" << std::endl;
    os << "name: "<<rhs.name << " balance: " << rhs.balance << "int_rate: " << rhs.int_rate << std::endl;
    std::cout << std::endl;
    return os;
    }
    
int main() {
//    Cloud *p1 = new Cloud {5}; 
//    Cloud c {3}; 
    // smart pointers automatically frees the memory allocation after it is out of scope
    // do not require "delete" to clean up the space
    std::unique_ptr<Cloud> p2 {new Cloud {2}}; 
    std::unique_ptr<Cloud> p3 = std::make_unique<Cloud>(3);
    std::unique_ptr<Cloud> p4 = std::make_unique<Cloud>(4);
    auto p5 = std::make_unique<Cloud>(5);
    
    // making nullptr using smart pointer
    std::unique_ptr<Cloud> p6;
    std::cout << "Address of p6: " << p6.get() << std::endl; 
    
    // cannot copy
//    p6 = p2; // causes complier error
    
    // instead, we move p2 and p2 will give up ownership of its pointing to
    std::cout << "p2 addr: " << p2.get() << std::endl;
    p6 = std::move(p2);
    std::cout << "p6 addr: " << p6.get() << std::endl;
    std::cout << "now, p2 addr: " << p2.get() << std::endl; //p2 is nullified

    if (!p2)
        std::cout << "p2 is nullptr" << std::endl;
    
    std::unique_ptr<Account> a1 = std::make_unique<Account>("Joon", 500);
    std::cout << *a1 << std::endl;
    
    std::unique_ptr<Account> a2 = std::make_unique<Saving>("Bin", 200, 3);
    std::cout << *a2 << std::endl;
    a2->deposit();
    
    std::cout << "-----------------------" << std::endl;
    std::vector<std::unique_ptr<Account>> accounts;
    accounts.push_back(std::make_unique<Account>("Jae", 500));
    accounts.push_back(std::make_unique<Account>("Chan", 300));
    accounts.push_back(std::make_unique<Saving>("Hyo", 300));
    
    for (const auto &account: accounts)
        std::cout << *account << std::endl;
    
//    std::cout << *v_ptrs.at(0) << std::endl;
    
    // free up the heap memory
//    delete p1;
    
    return 0;
    }