// ex51.cpp: Object Slicing
// Concept: Object Slicing
// Technical: Loss of subclass data.

class Base{int x;}; class Derived:public Base{int y;}; void f(Base b){} int main(){Derived d; f(d); return 0;}
