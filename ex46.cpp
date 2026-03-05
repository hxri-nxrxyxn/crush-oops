// Concept: Struct Basics
// Reference: Ch 6
// Why: Structs group related data members under one name; members are public by default.

#include <iostream>

struct Point {
    int x, y;
};

int main() {
    Point p = {10, 20};
    std::cout << p.x << "," << p.y << std::endl;
    return 0;
}

// TODO: Add a third member 'z' to the Point struct.
