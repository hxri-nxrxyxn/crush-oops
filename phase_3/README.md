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

---

## Beginner's Guide to Pointers and Addresses

To help get started with Phase 3, here is a quick overview of how memory works in C++:

### 1. The Address-of Operator (`&`)
Think of a variable as a box. The `&` operator tells you the **GPS coordinates** (memory address) of that box.
```cpp
int age = 25;
std::cout << &age; // Prints something like 0x7ffe... (a hexadecimal address)
```

### 2. The Pointer Variable (`*`)
A **Pointer** is a special variable that stores a **memory address**. You declare it using the `*` symbol.
```cpp
int* p = &age; // 'p' now "points to" the memory location of 'age'
```
*   `int*` means: "I am a pointer that holds the address of an integer."

### 3. The Dereference Operator (`*`)
When used on an existing pointer, the `*` symbol means **"Go to that address and get the value inside."**
```cpp
std::cout << *p; // Prints 25 (the value stored at the address in p)
*p = 30;         // Changes 'age' to 30 because we went to its "house" and swapped the value.
```

### 4. Pointers vs. References
*   **Pointer (`int* p`):** A separate variable storing an address. It can be changed to point somewhere else, or it can be `nullptr` (pointing nowhere).
*   **Reference (`int& r`):** An **alias** or nickname. Once `int& r = age;` is set, `r` *is* `age`. You cannot make it point to something else later.

### 5. The Arrow Operator (`->`)
When you have a pointer to a `struct` or `class`, using `.` won't work because the pointer isn't the object itself—it's just the address. The `->` operator is a shortcut for "dereference, then access."
```cpp
Node* n = new Node{1};
n->v = 2;   // Shortcut for (*n).v = 2;
delete n;
```

### 6. Dynamic Arrays (`new[]`)
When you need a list of items but don't know the size until the program is running, you use `new[]`.
```cpp
int* arr = new int[5]; // Allocates space for 5 integers
arr[0] = 100;          // Use it just like a normal array
delete[] arr;          // CRITICAL: Always use delete[] with brackets for arrays!
```

### 7. Pointer Arithmetic
Pointers are "smart"—if you add `1` to an `int*`, it doesn't just move 1 byte; it jumps forward by the size of one whole integer.
```cpp
int nums[3] = {10, 20, 30};
int* p = nums;        // Points to 10
std::cout << *(p+1);  // Jumps to the next 'house' and prints 20
```

### 8. Method Chaining (`return *this`)
In `ex34.cpp`, you'll see methods returning `*this`. This allows you to "chain" commands together on a single line.
```cpp
// Instead of:
// a.add(1);
// a.add(2);

// You can do:
a.add(1).add(2); // Each .add() returns the object itself, allowing the next call.
```

