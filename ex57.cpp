// Concept: Delegating Constructors
// Reference: Ch 6
// Why: One constructor can call another in the same class to reduce redundancy.

#include <iostream>

class Info {
    int id;
public:
    Info() : Info(0) {}
    Info(int val) : id(val) {}
    void show() { std::cout << id; }
};

int main() {
    Info i; i.show();
    return 0;
}

// TODO: Add a third constructor that takes a string and delegates to Info(int).
