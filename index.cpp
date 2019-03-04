
#include "Complex.cpp";
#include "Student.cpp";

main()
{
	// In console, input filename;
	std::string filename;
	std::cin >> filename;
	std::ifstream inputFile(filename);
	int size;
	inputFile>>size;


	Student* array = new Student[0];
	int i = 0;
	std::string ID;
	std::string fname;
	std::string lname;
	float testScore;
	float averageScore;
	while(i < size){
		inputFile >> ID;
		inputFile >> fname;
		inputFile >> lname;
		inputFile >> testScore;
		*(array + i)= Student{ID, fname, lname, testScore};
		averageScore += (*(array + i).getExamScore())/size;
	}

// MIN MAX AVERAGE OUTPUT
	inputFile.close();


	Student min = *array;
	Student max = *array; 
	//Student aveg = *array;

	for(int i = 1; i < size; i++){
		if(min.getExamScore() > *(array + i).getExamScore()){
			min = *(array + i);
		}
		if(max.getExamScore() < *(array + i).getExamScore()){
			max = *(array + i);
		}

		//if(aveg.getExamScore){}

	}

	std::cout << "" <<   << << << <<
	std::cout << "" << << << << << << << 

}

