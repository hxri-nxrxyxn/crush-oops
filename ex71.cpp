// Concept: The Arrow Operator
// Reference: Ch 10
// Why: The -> operator is shorthand for dereferencing and member access.
// BUG ALERT: // BUG ALERT: Forgetting that -> only works on pointers, not objects.

struct Ledger { double b; };
int main() { Ledger l{1.1}; Ledger* p = &l; return p->b > 0; }

// TODO: Create a second pointer that points to the first pointer (Ledger**).
