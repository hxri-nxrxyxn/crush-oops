// Concept: This Pointer
// Reference: Ch 6
// Why: The 'this' pointer refers to the current object instance.

#include <iostream>

class Self {
    int x;
public:
    void set_x(int x) { this->x = x; }
    void print() { std::cout << x; }
};

int main() {
    Self s; s.set_x(10); s.print();
    return 0;
}

// TODO: Return '*this' from set_x() to allow method chaining (s.set_x(10).print()).
