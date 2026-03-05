// Concept: Overloading >>
// Reference: Ch 8
// Why: Streaming input allows direct object population from streams.
// BUG ALERT: // BUG ALERT: Passing the object by value (Ledger l) instead of reference (Ledger& l).

#include <iostream>
struct Ledger { double b; friend std::istream& operator>>(std::istream& is, Ledger& l) { return is >> l.b; } };
int main() { Ledger l; std::cin >> l; return 0; }

// TODO: Add a check to verify if the input value is positive.
