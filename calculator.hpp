#include <iostream>
#include "calculator.h"
using namespace std;

template <typename T>
Calculator<T>::Calculator(T left, T right){
	left_val = left;
	right_val = right;
	return;
}

template <typename T>
T Calculator<T>::add(){
	return left_val + right_val;
}

template <typename T>
T Calculator<T>::sub(){
	return left_val - right_val;
}
