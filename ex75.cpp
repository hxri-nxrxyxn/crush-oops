// Concept: delete Operator
// Reference: Ch 10
// Why: delete prevents memory leaks by releasing heap-allocated memory.
// BUG ALERT: // BUG ALERT: Double-deleting a pointer or deleting a pointer to the stack.

int main() { int* p = new int; *p = 5; delete p; p = nullptr; return 0; }

// TODO: Explain why setting p to nullptr after delete is a best practice.
