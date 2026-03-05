// Concept: Nested Structs
// Reference: Ch 6
// Why: Structs can contain other structs as members for hierarchy.

#include <iostream>

struct Date { int d, m, y; };
struct Event { Date date; int id; };

int main() {
    Event e = {{1, 1, 2026}, 101};
    std::cout << e.date.y << std::endl;
    return 0;
}

// TODO: Change the event year to 2027 using the member access operator.
