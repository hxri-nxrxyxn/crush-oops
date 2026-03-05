// ex33.cpp: The this Pointer
// Concept: The this Pointer
// Technical: Object self-reference.

class A { int v; public: void set(int v) { this->v = v; } }; int main() { A a; a.set(1); return 0; }
