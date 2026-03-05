// Concept: Type Casting
// Reference: Ch 4
// Why: static_cast converts values between compatible types safely.

#include <iostream>

int main() {
    int a = 10, b = 3;
    double res = static_cast<double>(a) / b;
    std::cout << res << std::endl;
    return 0;
}

// TODO: Cast a double (9.99) to an int and print the result.
