// Concept: Default Constructor
// Reference: Ch 6
// Why: The default constructor initializes objects without arguments.

#include <iostream>

class Thing {
public:
    Thing() { std::cout << "Created"; }
};

int main() {
    Thing t;
    return 0;
}

// TODO: Initialize a private int member to 0 inside the default constructor.
