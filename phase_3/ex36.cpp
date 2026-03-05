// ex36.cpp: Copy Constructor
// Concept: Copy Constructor
// Technical: Deep copy setup.

class A { int* p; public: A(){p=new int;} A(const A& o){p=new int(*o.p);} ~A(){delete p;} }; int main(){ return 0; }
