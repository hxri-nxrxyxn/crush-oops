// ex22.cpp: Overload ==
// Concept: Overload ==
// Technical: Equality check.

class Num { int v; public: Num(int x):v(x){} bool operator==(Num o){return v==o.v;} };
int main(){ Num a(1), b(1); return a==b;}
