#ifndef CALCULATOR_H
#define CALCULATOR_H

template <class T>
class Calculator{
	private:
	T left_val;
	T right_val;
	public:
	/*
	Desc: Constructor
	*/

	Calculator(T left, T right);

	/*
	Desc: Adds left and right
	Pre: None
	Post: returns addition results
	*/

	T add();

	/*
	Desc: Subtracts left and right
	Pre: None
	Post: returns subtraction results
	*/

	T sub();
	/*
	Desc: Getters
	*/

	T get_left(){return left_val;}
	T get_right(){return right_val;}
};

#endif
