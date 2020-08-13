#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int cal_score(std::string student_answer, std::string answer_key);

struct Student {
	std::string name;
	std::string answer;
	int score {};
};

int main(){

	std::fstream responses {"responses.txt"};
	std::string answer_key {};

	if (!responses){
		std::cerr << "File Not Opening" << std::endl;
		return -1; 
	}
	
	// answer key
	std::getline(responses, answer_key);
	std::cout << answer_key << std::endl;

	// storing students data
	std::vector<Student> students;

	std::string student_name {};
	std::string student_answer {};
	int student_score {};

	while (!responses.eof()){
		std::getline(responses, student_name);
		std::getline(responses, student_answer);
		student_score = cal_score(student_answer, answer_key);
		students.push_back(Student {student_name, student_answer, student_score});
	}
	
	std::cout << students.at(0).answer << std::endl;
	std::cout << students.at(0).score << std::endl;

	// for (size_t i{0};i<students.size();++i){
	// 	std::cout << students.at(i).name << std::endl;
	// 	std::cout << students.at(i).answer << std::endl;
	// 	std::cout << students.at(i).score << std::endl;
	// }


	// student - name and scores

	// std::string name1;
	// std::string answer1;

	// std::getline(responses, name1);
	// std::getline(responses, answer1);
	
	// Student student1 {name1, answer1};
	// std::cout << student1.name << std::endl;
	// std::cout << student1.answer << std::endl;
 


	return 0;
}

int cal_score(std::string student_answer, std::string answer_key){
	int score {};
	for (size_t i{0};i<answer_key.size();++i){
		if (student_answer[i] == answer_key[i])
			++score;
	}

	return score;
}

