#include <iostream>
#include "complex.h"
#include "calculator.h"
#include "calculator.hpp"
using namespace std;

int main(){
	Complex a(2,4), b(1,2);
	Calculator<float> A(30.3, 20.7);

	Calculator<int> B(100, 30);

	Calculator<Complex> c(a,b);

	cout << "******Floating point calculator*****\n";
	cout << "Two numbers are: " << A.get_left() << ", " << A.get_right() << endl;
	cout << "float addition result: ";
	float float_add = A.add();
	cout << float_add << endl;
	float float_sub = A.sub();
	cout << "float subtraction result: ";
	cout << float_sub << endl;

	cout << "******Integer calculator******\n";
	cout << "Two numbers are: " << B.get_left() << ", " << B.get_right() << endl;
	cout << "Integer addition result: ";
	int int_add = B.add();
	cout << int_add << endl;
	int int_sub = B.sub();
	cout << "Integer subtraction result: ";
	cout << int_sub << endl;

	cout << "******Complex number calculator******\n";
	cout << "Two numbers are: (" << a.get_r() << ", " << a.get_i() << "*i), (" << b.get_r() << ", " << b.get_i() << "*i)\n";
	cout << "Complex number addition result: ";
	cout << "(" << c.add().get_r() << ", " << c.add().get_i() << "*i)\n";

    cout << "Complex number subtraction result: ";
    cout << "(" << c.sub().get_r() << ", " << c.sub().get_i() << "*i)\n";
}
