// ex25.cpp: Scope Resolution
// Concept: Scope Resolution
// Technical: Out-of-line definition.

class Num { public: void doIt(); };
void Num::doIt() {}
int main(){ Num n; n.doIt(); return 0;}
