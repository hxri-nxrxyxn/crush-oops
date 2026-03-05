// ex46.cpp: Base Constructors
// Concept: Base Constructors
// Technical: Calling super init.

class Base{public: Base(int x){}}; class Derived:public Base{public: Derived():Base(1){}}; int main(){return 0;}
