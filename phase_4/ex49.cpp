// ex49.cpp: Virtual Dtor
// Concept: Virtual Dtor
// Technical: Safe subclass deletion.

class Base{public: virtual ~Base(){} }; class Derived:public Base{public: ~Derived() override {} }; int main(){Base* b=new Derived; delete b; return 0;}
