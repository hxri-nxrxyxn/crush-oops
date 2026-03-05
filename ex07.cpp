// Concept: setprecision()
// Reference: Ch 2
// Why: setprecision() controls the number of digits displayed for floating-point values.

#include <iostream>
#include <iomanip>

int main() {
    double val = 123.456789;
    std::cout << std::fixed << std::setprecision(2) << val << std::endl;
    return 0;
}

// TODO: Modify the precision to display 4 decimal places.
