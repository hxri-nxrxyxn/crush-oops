// ex38.cpp: The Big Three
// Concept: The Big Three
// Technical: Rule of three.

class A { int* p; public: A(){p=new int;} A(const A& o){p=new int(*o.p);} A& operator=(const A& o){*p=*o.p; return *this;} ~A(){delete p;} }; int main(){ return 0; }
