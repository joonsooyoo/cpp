#include <iostream>
#include <memory>

/*

SMART POINTER EXERCISE: a problem of shared pointers
    + need for weak pointer concept

*/

class B; //forward declaration

class A {
private:
    std::shared_ptr<B> b_ptr;
public:
    A() {std::cout << "A constructor" << std::endl;}
    ~A() {std::cout << "A destructor" << std::endl;}
    void set_B(std::shared_ptr<B> &b){
        b_ptr = b;
    }
};

class B {
private:
    std::weak_ptr<A> a_ptr; // made weak to break the strong circular reference
public:
    B() {std::cout << "B constructor" << std::endl;};
    ~B() {std::cout << "A destructor" << std::endl;}
    void set_A(std::shared_ptr<A> &a){
        a_ptr = a;
    }    
};

int main(){
    
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();
    
    a->set_B(b);
    b->set_A(a);
    
    return 0;
}
