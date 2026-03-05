// Concept: Function Prototype
// Reference: Ch 4
// Why: Prototypes inform the compiler of a function's signature before its definition.

#include <iostream>

double calc(double);

int main() {
    std::cout << calc(5.0) << std::endl;
    return 0;
}

double calc(double x) { return x * x; }

// TODO: Add a prototype and definition for a function that cubes a double.
