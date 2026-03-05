// Concept: new Operator
// Reference: Ch 10
// Why: new allocates memory on the heap, persisting beyond scope.
// BUG ALERT: // BUG ALERT: Failing to check for nullptr if allocation fails (rare in modern OS).

int main() { int* p = new int(42); delete p; return 0; }

// TODO: Allocate a Ledger object dynamically using new.
