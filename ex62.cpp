// Concept: Overloading +
// Reference: Ch 8
// Why: Binary operator overloading allows intuitive syntax for object combining.
// BUG ALERT: // BUG ALERT: Overloading + as a member function when the left-hand operand is not your class type.

struct Ledger { double bal; Ledger operator+(Ledger other) { return Ledger{bal + other.bal}; } };
int main() { Ledger a{50}, b{25}; Ledger c = a + b; return 0; }

// TODO: Modify to return a Ledger with (bal + other.bal) * 1.05 (tax).
