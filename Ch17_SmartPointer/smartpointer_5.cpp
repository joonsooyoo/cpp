#include <iostream>
#include <memory>

/*

SMART POINTER EXERCISE: custom deleter
    sometimes we need to custom deleter that some objects do not provide

*/

class Test {
private:
    int data;
public:
    Test(int data)
        : data{data} {std::cout << "Test Constructor" << std::endl;}
    ~Test() {std::cout << "Test Destructor" << std::endl;}
};

// function deleter
void my_deleter(Test *ptr){ // at some time, deleter might not be called
    // in this way we can set a deleter call to destruct the object 
    std::cout << "\tmy_deleter called" << std::endl;
    delete ptr;
}

int main(){
    {
            std::shared_ptr<Test> p {new Test{5}, my_deleter};
    }
    std::cout << "------------------" << std::endl;    
    
    // lambda deleter
    {
        std::shared_ptr<Test> p2 {new Test{7}, [] (Test *ptr) {
            std::cout << "\tlambda function for deleter called" << std::endl;
            delete ptr;
            }
        };
    }
    return 0;
}