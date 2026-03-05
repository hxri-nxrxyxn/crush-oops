// Concept: setw()
// Reference: Ch 2
// Why: setw() sets the field width for the next output operation, aiding in alignment.

#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::setw(10) << "Data" << std::setw(10) << "Value" << std::endl;
    std::cout << std::setw(10) << "CPU" << std::setw(10) << 95 << std::endl;
    return 0;
}

// TODO: Change the width from 10 to 15 for both columns.
