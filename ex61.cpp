// Concept: Friend Functions
// Reference: Ch 8
// Why: Friend functions access private members without being member functions.
// BUG ALERT: // BUG ALERT: Defining the friend function inside the class without the 'friend' keyword makes it a member.

class Ledger { double bal; public: Ledger(double b) : bal(b) {} friend bool eq(Ledger l1, Ledger l2); };
bool eq(Ledger l1, Ledger l2) { return l1.bal == l2.bal; }
int main() { Ledger a(10), b(10); return eq(a,b); }

// TODO: Add a friend function to compare if bal > 0.
