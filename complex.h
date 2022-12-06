#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
	public:
	/*
	Desc: Constructor
	Pre: Input real and imaginary
	Post: Sets real and imaginary
	*/
	Complex(const double real = 0, const double imaginary = 0);
	/*
	Desc: Overloads '+' operator
	Pre: None
	Post: None
	*/
	Complex operator + (Complex const & object);
	/*
	Desc: Overloads '-' operator
	Pre: None
	Post: None
	*/
	Complex & operator - (Complex const & object);

/*	ostream &operator << (ostream &os, const Complex &complex){
		os << "(" << Complex.m_real << ", " << Complex.m_imaginary << ")";
		return os;
	}
*/
	double get_r(){return m_real;}
	double get_i(){return m_imaginary;}
	Complex & operator - (Complex const & object);
	private:
	double m_real, m_imaginary;
};

#endif
