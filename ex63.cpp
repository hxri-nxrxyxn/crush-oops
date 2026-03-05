// Concept: Overloading -
// Reference: Ch 8
// Why: Arithmetic overloading facilitates domain-specific logic like debt calculation.
// BUG ALERT: // BUG ALERT: Not returning by value for binary arithmetic operators leads to unexpected side effects.

struct Ledger { double bal; Ledger operator-(Ledger o) { return Ledger{bal - o.bal}; } };
int main() { Ledger a{100}, b{30}; Ledger c = a - b; return 0; }

// TODO: Add logic to prevent bal from going below zero.
