#include <iostream>
#include "calculator.h"

int main(int argc, char** argv) {
	double a, b;
	a = 10.0;
	b = 20.0;
	std::cout << "a=" << a << " ";
	std::cout << "b=" << b << std::endl;
	Calculator calc;
	std::cout << calc.add(a, b) << std::endl;
	std::cout << calc.sub(a, b) << std::endl;
	std::cout << calc.mul(a, b) << std::endl;
	std::cout << calc.div(a, b) << std::endl;

	return 0;
}
