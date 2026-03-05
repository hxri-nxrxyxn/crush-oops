// ex47.cpp: Virtual Funcs
// Concept: Virtual Funcs
// Technical: Dynamic dispatch.

class Base{public: virtual void f(){} }; class Derived:public Base{public: void f() override {} }; int main(){return 0;}
