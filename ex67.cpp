// Concept: Overloading unary -
// Reference: Ch 8
// Why: Unary operators can represent state negation like accounting debt.
// BUG ALERT: // BUG ALERT: Modifying the original object instead of returning a new one.

struct Ledger { double b; Ledger operator-() { return Ledger{-b}; } };
int main() { Ledger l{50}; Ledger debt = -l; return 0; }

// TODO: Add a unary + operator that returns the absolute value.
