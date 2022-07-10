#include <iostream>
using namespace std;

template <class T>
void print(T a) {
	cout << a << endl;
}


int factorial(int number) {

	if (number == 0) {
		return 0;
	}if (number == 1) {
		return 1;
	}


	return number * factorial(number - 1);
}
 
void main() {
	print(factorial(3));
}