// ex21.cpp: Overload +
// Concept: Overload +
// Technical: Custom addition.

class Num { int v; public: Num(int x):v(x){} Num operator+(Num o){return Num(v+o.v);} };
int main(){ Num a(1), b(2); a+b; return 0;}
