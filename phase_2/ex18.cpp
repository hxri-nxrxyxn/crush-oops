// ex18.cpp: Mutators
// Concept: Mutators
// Technical: Safe writing.

class Box { int w; public: void set(int v) { if(v>0) w=v; } };
int main() { Box b; b.set(5); return 0; }
