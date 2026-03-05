// Concept: Public Specifier
// Reference: Ch 6
// Why: Public members are accessible from outside the class.

#include <iostream>

class Box {
public:
    double length;
};

int main() {
    Box b; b.length = 5.0;
    std::cout << b.length << std::endl;
    return 0;
}

// TODO: Add a public 'width' member and initialize it.
