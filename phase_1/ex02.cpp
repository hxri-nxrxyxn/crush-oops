#include <iostream>
#include <string>

// ex02: Stream Extraction (Input)
// Concept: Standard Input stream (cin).
// Technical: Extracts data from stdin and stores it in a typed variable.

int main() {
    std::string name;
    std::cout << "Enter system name: ";
    std::cin >> name;
    std::cout << "Target: " << name << std::endl;
    return 0;
}
