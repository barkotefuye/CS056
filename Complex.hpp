#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_
// confused about definitions
#include <iostream>
#include <string>

class Complex{
public:
	Complex(Complex::other);
	Complex(float r, float i);
	//Complex() = delete;

	float getReal();
	float getImaginary();
	Complex add(Complex::other);
	Complex subtract(Complex::other);
	Complex multiply(Complex::other);
	Complex divide(Complex::other);

	void toString();


private:
	float real_;
	float imaginary_;

}