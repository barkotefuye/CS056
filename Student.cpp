#include "Student.hpp";


Student::Student(std::string id, std::string fname, std::string lname, float examScore){
	id_ = id;
	fname_ = fname;
	lname_ = lname;
	examScore_ = examScore;
}

std::string Student::getID(){
	return id_;
}
std::string Student::getFirstName(){
	return fname_;
}
	
std::string String::getLastName(){
	return lname_;
}

float String::getExamScore(){
	return examScore_;
}






