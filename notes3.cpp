#include <iostream>

int max_score(int[], int)

int main(int argc, char** argv){

	int array[5] = {1,2,3,4,5};
	print_array(array, 7);

	return 0;

}

int max_score(int array[], int size){
	int max = 0;
	for(int i = 0; i < size; ++i){
		if (array[i] > array[max]){
			max = i;
		}
	}
	return array[max];
}

