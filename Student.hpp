#ifndef STUDENT_HPP_
#define STUDENT_HPP_

class Student{
public:
	Student(std::string id, std::string fname, std::string lname, float examScore);
	//Complex() = delete;

	std::string getID();
	std::string getFirstName();
	std::string getLastName();
	float getExamScore();


private:
	std::string id_;
	std::string fname_;
	std::string lname_;
	float examScore_;

}