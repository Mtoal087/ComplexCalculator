#include <iostream>
#include "complex.h"
using namespace std;

Complex::Complex(const double real, const double imaginary){
	m_real = real;
	m_imaginary = imaginary;
	return;
}

Complex Complex::operator +(Complex const & object){
	Complex res;
	double real = m_real + object.m_real;
	double imaginary = m_imaginary + object.m_imaginary;
	res.set(real, imaginary);
	return res;
}

Complex Complex::operator - (Complex const & object){
	Complex res;
	double real = m_real - object.m_real;
	double imaginary = m_imaginary - object.m_imaginary;
	res.set(real, imaginary);
	return res;
}
