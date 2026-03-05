// Concept: this Pointer Basics
// Reference: Ch 10
// Why: The this pointer allows an object to refer to itself explicitly.
// BUG ALERT: // BUG ALERT: Trying to use 'this' inside a static member function.

struct Node { int id; void set(int id) { this->id = id; } };
int main() { Node n; n.set(1); return 0; }

// TODO: Use 'this' to check if a passed object is the same instance (this == &other).
