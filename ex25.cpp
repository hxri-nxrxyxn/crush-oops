// Concept: Function Overloading
// Reference: Ch 4
// Why: Multiple functions can share a name if their parameter lists differ.

#include <iostream>

void print(int i) { std::cout << "Int: " << i << std::endl; }
void print(double d) { std::cout << "Double: " << d << std::endl; }

int main() {
    print(10);
    print(10.5);
    return 0;
}

// TODO: Overload print() to accept a std::string.
