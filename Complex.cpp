// Lab 4
#include "lab4.hpp";

Complex::Complex(float real, float imaginary)
{
	real_ = real;
	imaginary_ = imaginary;
}

Complex::Complex(Complex other){

}
float getReal(){
	return real_;
}
	

Complex Complex::getImaginary(){
	return imaginary_;

}
Complex Complex::operator+ (Complex other){
	float nreal = getReal() + other.getReal(); 
	float nimaginary = getImaginary() + other.getImaginary();
	Complex New = Complex{nreal, nimaginary};
	return New;

}
Complex Complex::operator- (Complex other){
	float nreal = getReal() - other.getReal(); 
	float nimaginary = getImaginary() - other.getImaginary();
	Complex New = Complex{nreal, nimaginary};
	return New;

}
	
Complex Complex::operator* (Complex other){
	float nreal = getReal() * other.getReal() - getImaginary() * other.getImaginary();
	float nimaginary = getImaginary() + other.getImaginary();
	Complex New = Complex{nreal, nimaginary};
	return New;

}
	
//example with testing pointers!!
Complex Complex::operator/ (Complex other){
	Complex copy = Complex(*this); // this is not needed! 
	Complex conjugate = Complex(other.getReal(), -1 * other.getImaginary());
	Complex numerator = copy * conjugate;
	Complex denominator = other * conjugate;
	float nreal = numerator.getReal() / denominator.getReal();
	float nimaginary = numerator.getImaginary() / denominator.getImaginary();
	Complex New = Complex{nreal, nimaginary};
	return New;

}

void Complex::toString(){
	std::cout<<" The complex number: "<< getReal() << " + " << getImaginary();
}