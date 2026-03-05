// Concept: Overloading []
// Reference: Ch 8
// Why: Subscript overloading provides safe access to internal collection data.
// BUG ALERT: // BUG ALERT: Returning by value instead of reference if you want to allow assignment (l[i] = val).

struct Ledger { double log[2]={1.1, 2.2}; double operator[](int i) { return log[i]; } };
int main() { Ledger l; return l[0] > 0; }

// TODO: Add bounds checking to the [] operator.
