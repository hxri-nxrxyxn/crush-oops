// Concept: Pointer to Class
// Reference: Ch 10
// Why: Object pointers are the foundation of dynamic memory and polymorphism.
// BUG ALERT: // BUG ALERT: Using '.' instead of '->' when accessing members through a pointer.

struct Node { int id; };
int main() { Node n{5}; Node* p = &n; p->id = 10; return 0; }

// TODO: Use (*p).id to perform the same assignment.
