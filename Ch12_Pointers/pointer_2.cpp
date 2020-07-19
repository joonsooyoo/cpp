#include <iostream>
#include <string>
using namespace std;
/*

POINTER EXERCISE: dynamic memory allocation using pointer

*/

int main() {

	// dynamic allocation of memory in heap
	int *int_ptr {nullptr};
	cout << "int_ptr: " << int_ptr << endl;
	
	int_ptr = new int;
	*int_ptr = 100;

	cout << "int_ptr: " << int_ptr << endl;
	cout << "*int_ptr: " << *int_ptr << endl;

	delete int_ptr; // this frees memory space in heap

	cout << "\n================================\n";


	// new allocatio of double in heap memory
	double *temp_ptr {nullptr};
	size_t size {0};

	temp_ptr = new double[size];

	cout << "temp_ptr: " << temp_ptr << endl;
	cout << "*temp_ptr: " << *temp_ptr << endl;

	delete [] temp_ptr;

	// array and ptr
	cout << "\n================================\n";

	int score[] {100, 95, 98, -1};
	int *score_ptr {score};

	cout << "score: " << score << endl;
	cout << "score_ptr: " << score_ptr << endl;
	cout << endl;
	cout << "*score: " << *score << endl;
	cout << "*score_ptr: " << *score_ptr << endl;
	cout << endl;
	cout << "score[0]: " << score[0] << endl;
	cout << "score_ptr[0]: " << score_ptr[0] << endl;
	cout << endl;
	cout << "*score_ptr: " << *score_ptr << endl;
	cout << "*(score_ptr + 1): " << *(score_ptr + 1) << endl;
	cout << "*(score_ptr + 2): " << *(score_ptr + 2) << endl;
	cout << "*score_ptr + 2: " << *score_ptr + 2 << endl; // *score_ptr + 2 without a paranthesis

	// pointer arithmetic
	cout << "\n================================\n";

	while (*score_ptr != -1){
		cout << "score_ptr: " << score_ptr << endl;
		cout << "*score_ptr: " << *score_ptr << endl;
		++score_ptr;
	}
	// * and ++ operators precedence
	cout << "\n================================\n";

	score_ptr = score; // reinitialize;

	while (*score_ptr != -1)
		cout << "*score_ptr++: " << *score_ptr++ << endl;
	
	// pointer comparison
	cout << "\n================================\n";

	string s1 {"joon"};
	string s2 {"joon"};
	string s3 {"jae"};

	string *p1 {&s1};
	string *p2 {&s2};
	string *p3 {&s1};

	cout << boolalpha;

	cout << "p1 == p2: " << (p1 == p2) << endl; // false
	cout << "p1 == p3: " << (p1 == p3) << endl; // true
	cout << endl;
	cout << "*p1 == *p2: " << (*p1 == *p2) << endl; // true
	cout << "*p1 == *p3: " << (*p1 == *p3) << endl; // true
	cout << endl;

	p3 = &s3;
	cout << "*p3 == *p1: " << (*p3 == *p1) << endl; // false

	// pointer subtraction
	cout << "\n================================\n";

	char name[] = "mamoru";
	cout << name << endl;

	char *m_ptr {nullptr};
	char *o_ptr {nullptr};

	m_ptr = &name[0];
	o_ptr = &name[3];

	cout << "*m_ptr: " << *m_ptr << endl;
	cout << "*o_ptr: " << *o_ptr << endl;

	cout << "o_ptr - m_ptr: " << o_ptr - m_ptr << endl; // meaning three characters between m and o\
	
	return 0;
}