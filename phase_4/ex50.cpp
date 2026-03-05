// ex50.cpp: Abstract Class
// Concept: Abstract Class
// Technical: Pure virtual funcs.

class Base{public: virtual void f()=0; }; class Derived:public Base{public: void f() override {} }; int main(){Derived d; return 0;}
