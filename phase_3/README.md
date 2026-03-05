# Phase 3: Memory Management (Chapters 9-10)

## Theoretical Concepts
Direct memory manipulation is C++'s primary advantage for high-performance systems. This phase covers the dichotomy of the Stack and the Heap.
1. **Pointers:** Variables that hold memory addresses, enabling dynamic allocation, array traversal, and polymorphism.
2. **Dynamic Memory (The Heap):** Using `new` and `delete` to request memory at runtime that persists beyond the scope of a function.
3. **The Big Three:** When a class manages dynamic memory, it requires custom implementations of the Destructor, Copy Constructor, and Copy Assignment Operator to prevent shallow copies and memory leaks.

## Glossary
*   **Dangling Pointer:** A pointer that continues to reference a memory location after it has been deallocated.
*   **Memory Leak:** Failing to `delete` dynamically allocated memory, causing the system's available memory to deplete.
*   **Deep Copy vs Shallow Copy:** A deep copy duplicates the underlying dynamically allocated data. A shallow copy only duplicates the pointer, leading to double-free errors.
*   **The `this` Pointer:** An implicit pointer passed to non-static member functions, pointing to the instance invoking the method.

## Code Snippets
### Dynamic Allocation
```cpp
int* ptr = new int(42); // Allocate on heap
delete ptr;             // Free memory
ptr = nullptr;          // Prevent dangling pointer
```

## The Pitfalls: Common Bugs for Beginners
*   **Mismatching new/delete:** Using `delete` on an array allocated with `new[]`, or `delete[]` on a single object.
*   **Double Free:** Calling `delete` on the same pointer twice, usually resulting from shallow copies.
*   **Dereferencing nullptr:** Attempting to read or write to `*ptr` when `ptr` is `nullptr` causes an immediate segmentation fault.
