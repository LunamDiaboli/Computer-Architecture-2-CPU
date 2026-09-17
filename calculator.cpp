#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

int Calculator::Div (double a, double b);
{
    return a / b + 0.5;
}

int main(int argc, char** argv) {
    double a = 10.0, b = 2.0;

    Calculator calc;

    std::cout << calc.Add(a, b) << std::endl;
    std::cout << calc.Sub(a, b) << std::endl;
    std::cout << calc.Mul(a, b) << std::endl;
    std::cout << calc.Div(a, b) << std::endl;

    return 0;
}
