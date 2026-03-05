// ex34.cpp: Chaining w/ this
// Concept: Chaining w/ this
// Technical: Returning *this.

class A { int v; public: A& add(int x) { v+=x; return *this; } }; int main() { A a; a.add(1).add(2); return 0; }
