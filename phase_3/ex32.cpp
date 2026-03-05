// ex32.cpp: Arrow Operator
// Concept: Arrow Operator
// Technical: Pointer to class member.

struct Node { int v; }; int main() { Node* n = new Node{1}; n->v = 2; delete n; return 0; }
