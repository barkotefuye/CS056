// Arrays, while and do-while loop, types, chars
// Array use contiguous memory

#include <iostream>

void test_by_value(int x);
void test_by_reference(int& x);

void f(int a&, int b&){
	int temp = a;
	a = b;
	b = temp;
}

int main(int argc, char** argv ){
	// Interview questions:
	int a = 4, b = 5;
	f(a, b);
	std::cout << a << "," << b << "\n"; // 5, 4


	int n[10];
	for( int i = 0; i < ; i++){

		std::cout << "The address of n[" << i << "] 
		is:" << &n[i] << "\n";
	}


	int n1, n2;
	int c;
	int d;
	// to print address
	std::cout << "Address of n[0]" << &n[0]; 
	std::cout << "Address of n[1]" << &n[1];
	std::cout << "Address of n1:"<< &n1 << "\n";
	std::cout << "Address of n2:"<< &n2 << "\n";
	std::cout << "Address of c:"<< &n1 << "\n";
	std::cout << "Address of d:"<< &n1 << "\n";
	return 0; 
}

// address for x and address for input parameter is different. 
//A copy is made of input parameter to x, but values are stored on different address
void test(int x){
	x = 5;
}


// Pointers: a variable that holds a memory address.

int* ptr = &a; // stores mem address of int a
double* ptr = &d; //stores mem address of int d

//On 64 bit machine, memory address is 8 bytes (64 bits / 8 bit slots )
//On 32 bit, 4 bytes (32 bits / 8 bit slots )
