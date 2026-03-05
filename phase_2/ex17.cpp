// ex17.cpp: Accessors
// Concept: Accessors
// Technical: Safe reading.

class Box { int w=5; public: int get() const { return w; } };
int main() { Box b; b.get(); return 0; }
