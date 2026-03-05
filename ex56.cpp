// Concept: Constructor Init List
// Reference: Ch 6
// Why: Initialization lists are more efficient than assignment in the constructor body.

#include <iostream>

class Vector {
    int x, y;
public:
    Vector(int a, int b) : x(a), y(b) {}
    void print() { std::cout << x << "," << y; }
};

int main() {
    Vector v(1, 2); v.print();
    return 0;
}

// TODO: Add a third member 'z' and update the initialization list.
