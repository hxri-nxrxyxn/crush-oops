// Concept: Scope Resolution Operator
// Reference: Ch 6
// Why: The :: operator is used to define member functions outside the class.

#include <iostream>

class Outer {
public:
    void display();
};

void Outer::display() {
    std::cout << "Outside definition";
}

int main() {
    Outer o; o.display();
    return 0;
}

// TODO: Add a private member and access it inside the display() definition.
