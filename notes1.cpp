#include <iostream>
//LECTURE 1: 01/24/19
//scope
//strongly typed language

float fan_to_cel(float f){
	float c = (f - 32) * 100 / 180;
	return c;
}

int main(int argc, char** argv){
	std::cout << "Hello World!";
	float f = 70;
	std::cout << f << " F is equivalent to"
			  << faherenheit_to_celcius(f) << "C\n";

	int a = 4;
	short b = 4; 
	unsigned int c = 4;
	long d = 5;

	std:: cout << "the size of the int is " << sizeof(int) << "\n";
	std:: cout << "the size of the short is " << sizeof(short) << "\n";	
	std:: cout << "the size of long is " << sizeof(long) << "\n";	
	std:: cout << "the size of float is " << sizeof(float) << "\n";
	std:: cout << "the size of boolean is " << sizeof(boolean) << "\n";
	std:: cout << "the size of char is " << sizeof(char) << "\n";		
	return 0;
}

// In C++ integer operation occur when all numbers are integers

// new line => \n

