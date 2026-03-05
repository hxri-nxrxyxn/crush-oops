// ex20.cpp: Friend Functions
// Concept: Friend Functions
// Technical: Private access.

class A { int v=1; friend void show(A a); };
#include<iostream>
void show(A a){std::cout<<a.v;}
int main(){show(A()); return 0;}
