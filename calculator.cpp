#include "calculator.h"

int Calculator::add(double a, double b) {
	return a + b;
}

int Calculator::sub(double a, double b) {
	return add(a, -b);
}
