// Concept: Overloading ==
// Reference: Ch 8
// Why: Equality overloading is essential for generic algorithm compatibility.
// BUG ALERT: // BUG ALERT: Comparing pointers (this == &other) instead of member values.

struct Node { int id; bool operator==(const Node& o) { return id == o.id; } };
int main() { Node n1{1}, n2{1}; return n1 == n2; }

// TODO: Overload != using the == operator.
