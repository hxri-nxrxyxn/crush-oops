// ex13.cpp: Public Methods
// Concept: Public Methods
// Technical: Exposing interface.

class Box { int w=0; public: void set(int v) { w = v; } };
int main() { Box b; b.set(5); return 0; }
