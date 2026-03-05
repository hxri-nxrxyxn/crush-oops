// Concept: Memory Leak Scenario
// Reference: Ch 10
// Why: Leaks occur when the last pointer to heap memory is lost.
// BUG ALERT: // BUG ALERT: Reassigning a pointer before deleting the memory it previously held.

void leak() { int* p = new int(10); } // Leak!
int main() { leak(); return 0; }

// TODO: Fix the leak by adding the appropriate delete statement.
