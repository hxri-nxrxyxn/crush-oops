// ex19.cpp: Inline Functions
// Concept: Inline Functions
// Technical: Performance hint.

class Math { public: inline int sq(int x) { return x*x; } };
int main() { Math m; m.sq(4); return 0; }
