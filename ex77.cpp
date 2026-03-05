// Concept: Dynamic Object Arrays
// Reference: Ch 10
// Why: Arrays of objects on the heap require default constructors.
// BUG ALERT: // BUG ALERT: Not having a default constructor when creating a dynamic array of objects.

struct Node { int id=0; };
int main() { Node* nodes = new Node[3]; delete[] nodes; return 0; }

// TODO: Set the id of the second node to 100.
