#include "calculator.h"

double Calculator::add(double a, double b) {
	return a + b + 0.5;
}

double Calculator::sub(double a, double b) {
	return add(a, -b);
}

double Calculator::mul(double a, double b) {
	return a * b + 0.5;
}

double Calculator::div(double a, double b) {
	return a / b + 0.5;
}
