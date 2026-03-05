#include <iostream>
#include <iomanip>

// ex06: I/O Formatting
// Concept: std::iomanip Manipulators.
// Technical: Controlling decimal precision and field width in the output stream.

int main() {
    double value = 123.456789;
    std::cout << std::fixed << std::setprecision(2) << "Fixed: " << value << std::endl;
    std::cout << std::setw(15) << std::setfill('*') << value << std::endl;
    return 0;
}
