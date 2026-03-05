// ex24.cpp: Const Methods
// Concept: Const Methods
// Technical: Read-only guarantee.

class Num { int v=0; public: int get() const { return v; } };
int main(){ const Num n; n.get(); return 0;}
