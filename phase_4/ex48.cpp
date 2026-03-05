// ex48.cpp: Polymorphism
// Concept: Polymorphism
// Technical: Base pointers.

class Base{public: virtual void f(){} }; class Derived:public Base{public: void f() override {} }; int main(){Base* b = new Derived(); b->f(); delete b; return 0;}
