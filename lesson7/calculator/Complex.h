#pragma once
#include <iostream>

class Complex // класс для хранения комплекснх чисел
{
public:
	Complex() : real_(0), imaginary_(0) {}
	explicit Complex(std::string stringValue);
	Complex(Complex const & another) : real_(another.real_), imaginary_(another.imaginary_) {}
	Complex(double r, double i) : real_(r), imaginary_(i) {}
	double GetReal();
	double GetImaginary();
	std::string ToString();

	Complex operator +(Complex &a);
	Complex operator -(Complex &a);
	Complex operator *(Complex &a);
	Complex operator /(Complex &a);
	Complex operator =(Complex& a);

	friend std::ostream& operator <<(std::ostream& object, const Complex& temp);

private:
	double real_;
	double imaginary_;
};