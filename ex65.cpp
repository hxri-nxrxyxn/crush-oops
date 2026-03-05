// Concept: Overloading <<
// Reference: Ch 8
// Why: Streaming output enables standardized object visualization.
// BUG ALERT: // BUG ALERT: Forgetting to return the ostream reference (os), preventing chaining.

#include <iostream>
struct Ledger { double b; friend std::ostream& operator<<(std::ostream& os, const Ledger& l) { return os << l.b; } };
int main() { Ledger l{9.9}; std::cout << l; return 0; }

// TODO: Format the output to include a '$' prefix.
