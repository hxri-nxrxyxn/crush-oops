// Concept: Destructor & delete
// Reference: Ch 10
// Why: Destructors automate cleanup of dynamic resources during object death.
// BUG ALERT: // BUG ALERT: Forgetting the destructor leads to leaks when objects go out of scope.

struct Ledger { int* log; Ledger() { log = new int[5]; } ~Ledger() { delete[] log; } };
int main() { Ledger l; return 0; }

// TODO: Add a copy constructor to prevent double-deletion of 'log'.
