#include <iostream>
#include <memory>
#include <vector>

/*

SMART POINTER EXERCISE: using shared pointer
	shared pointer pointing to is shared by multiple pointers
		we track the number of pointers that are pointing to the same object by use_count
			when count=0, the object on the heap is destroyed

*/

int main() {

	std::shared_ptr<int> p1 {new int {10}};
	std::cout << "use_count: " << p1.use_count() << std::endl;//1
	std::cout << *p1 << std::endl; //10
	
	std::shared_ptr<int> p2 {p1};
	std::cout << "use_count: " << p1.use_count() << std::endl;//2
	std::cout << *p2 << std::endl; //10
	
	p1.reset(); //p1 loses contatct with its pointing to
	std::cout << "use_count: " << p1.use_count() << std::endl;//0
	
	std::shared_ptr<int> p3 {p2};
	std::cout << "use_count: " << p2.use_count() << std::endl;//2
	std::cout << "-------------------------" << std::endl;

	std::vector<std::shared_ptr<int>> v;
	std::shared_ptr<int> e1 {new int {10}};
	std::shared_ptr<int> e2 {e1}; //copy <-> unique_ptr
	std::cout << "use_count for e1: " << e1.use_count() << std::endl; //2

	v.push_back(e1); //copy <-> unique_ptr
	//since e1 is copied to the vector, use_count increments
	std::cout << "use_count for e1: " << e1.use_count() << std::endl; //3
	
	v.push_back(e2);
	std::cout << "use_count for e1: " << e1.use_count() << std::endl; //4

	for (auto elt: v)
		std::cout << *elt << std::endl; //10, 10

	std::cout << "-------------------------" << std::endl;
	std::shared_ptr<int> a1 = std::make_shared<int>(1);
	std::cout << *a1 << std::endl; //7
	std::cout << "a1.use_count(): "<< a1.use_count() << std::endl; //1

	std::shared_ptr<int> a2 = std::make_shared<int>(2);
	std::cout << *a2 << std::endl; //20

	auto a3 = std::make_shared<int>(3);
	std::cout << *a3 << std::endl; //5

	std::shared_ptr<int> a4;
	a4 = a1; //copy
	std::cout << *a4 << std::endl; //1
	std::cout << "a1.use_count(): "<< a1.use_count() << std::endl; //2


	return 0;
}
