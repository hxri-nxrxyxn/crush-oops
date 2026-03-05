// Concept: Standard Input
// Reference: Ch 1
// Why: cin extracts formatted data from the standard input stream.

#include <iostream>

int main() {
    int val;
    std::cout << "Enter integer: ";
    std::cin >> val;
    std::cout << "Stored: " << val << std::endl;
    return 0;
}

// TODO: Modify the code to input and output a double instead of an int.
