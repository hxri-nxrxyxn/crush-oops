// Concept: this for Chaining
// Reference: Ch 10
// Why: Returning *this allows for fluid, concatenated function calls.
// BUG ALERT: // BUG ALERT: Returning Ledger by value instead of reference, breaking the chain's state.

struct Ledger { double b; Ledger& add(double v) { b+=v; return *this; } };
int main() { Ledger l{0}; l.add(5).add(10); return 0; }

// TODO: Add a sub(double v) method that also returns *this.
