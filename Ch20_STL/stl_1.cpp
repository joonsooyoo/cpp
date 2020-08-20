#include <iostream>
#include <vector>
#include <algorithm>
// #include <functional>
#include <numeric>

#define MAX(a, b) ((a > b) ? a : b) // using macros
#define SQUARE(a) (a*a)

/*

STANDARD TEMPLATE LIBRARY: containers, algorithms, and iterators
	containers are ordered-lists and unordered-lists
		about 60 algorithms in STL
			these allow generic programming
				by GP, it allows different types as long as it makes sense

*/

int max(int a, int b){
	return (a > b) ? a : b;
}

double max(double a, double b){
	return (a > b) ? a : b;
}

int main(){
	
	/* sort, reverse, accumulate algorithm in STL with vectors */

	std::vector<int> v {2,1,3};
	int a {};
	// a = v.begin();
	// std::cout << a << std::endl;

	for (auto item: v)
		std::cout << item << std::endl;

	std::sort(v.begin(), v.end()); //v.begin(): iterator

	
	for (auto item: v)
		std::cout << item << std::endl;

	std::reverse(v.begin(), v.end());

	for (auto item: v)
		std::cout << item << std::endl;

	int sum {};
	sum = std::accumulate(v.begin(), v.end(), 0);

	std::cout << sum << std::endl << std::endl;	

	int n1 = 3;
	int n2 = 4;
	std::cout << max(n1, n2) << std::endl;

	// using macros
	std::cout << MAX(n1, n2) << std::endl << std::endl;

	std::cout << 100 / SQUARE(2) << std::endl;

	return 0;
}