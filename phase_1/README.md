# Phase 1: Procedural Mastery (Chapters 1-5)

## Theoretical Concepts
Procedural programming is the foundational paradigm of C++, emphasizing the execution of discrete sequences of instructions. In this phase, we analyze the lifecycle of a C++ program—from pre-processing and compilation to linking and execution. Key architectural themes include:

1.  **Stream-Based I/O Abstraction:** C++ treats input and output as sequential data flows (streams). `std::cin` and `std::cout` are high-level abstractions over system-specific hardware.
2.  **Type Safety & Conversions:** Understanding the memory representation of fundamental types (integers, floating-points, characters) and the risks of implicit narrowing conversions.
3.  **Control Flow Mechanisms:** Selection (`if-else`, `switch`) and iteration (`while`, `for`) as the deterministic tools for managing program execution logic.

## Glossary
*   **L-value:** A persistent memory object that can appear on the left side of an assignment (e.g., a variable).
*   **R-value:** A temporary value that lacks a persistent memory location (e.g., a literal or the result of an expression).
*   **Scope:** The region of program text where an identifier (variable, function, etc.) is visible and accessible.
*   **Short-circuit Evaluation:** A logical optimization where the second operand of `&&` or `||` is only evaluated if the first operand is insufficient to determine the result.
*   **Array-to-Pointer Decay:** The implicit conversion of an array name to a pointer to its first element when passed to a function.

## Code Snippets
### Stream Formatting
```cpp
#include <iomanip>
std::cout << std::fixed << std::setprecision(2) << 123.456; // Outputs: 123.46
```

### Static Casting
```cpp
int a = 10, b = 3;
double result = static_cast<double>(a) / b; // Forces floating-point division
```

## The Pitfalls: Common Bugs for Beginners
*   **Integer Division:** `5 / 2` yields `2` in C++. Forgetting to cast one operand to `double` is a frequent cause of precision loss.
*   **Dangling Else:** In nested `if` statements, the `else` always binds to the nearest unmatched `if`, which can lead to logical errors if not clarified by braces `{}`.
*   **Uninitialized Variables:** Local variables in C++ are not automatically zeroed. Accessing them leads to **Undefined Behavior (UB)**.
*   **Off-By-One Errors:** In array indexing, accessing `arr[size]` is a memory violation since indices range from `0` to `size - 1`.

---

## Beginner's Guide to Procedural Programming

To help you recollect the basics of C++ procedural logic from Phase 1:

### 1. The I/O Stream Directions
*   **`std::cout << "Text";`**: The arrows (`<<`) point **out** of the code and into the stream (Insertion).
*   **`std::cin >> variable;`**: The arrows (`>>`) point **in** from the stream and into your variable (Extraction).

### 2. The Integer Division Trap
In C++, `5 / 2` is **not** `2.5`. Because both `5` and `2` are integers, the result is truncated to `2`.
*   **The Fix:** Use `static_cast<double>(a) / b;` to force one side into a decimal type. This tells the compiler to perform floating-point division.

### 3. Namespaces (`std::`)
C++ uses the `std::` prefix (Standard Namespace) to avoid name clashes. While `using namespace std;` is common in tutorials, using the explicit `std::cout` is safer in larger projects.

### 4. Formatting Output (`<iomanip>`)
*   **`std::fixed`**: Always show decimal points.
*   **`std::setprecision(n)`**: Set the number of decimal places.
*   **`std::setw(n)`**: Set the width of the output field (useful for making tables).
*   **`std::setfill('c')`**: Fill the empty spaces in a `setw` field with a specific character (like `*`).

### 5. Numeric Limits (`<limits>`)
If you ever need to know the largest or smallest number a type can hold on your specific computer, use `std::numeric_limits`:
```cpp
std::cout << std::numeric_limits<int>::max(); // Prints the maximum value of an int
```

### 6. Selection: `if` vs `switch`
*   **`if-else`**: Best for complex ranges (e.g., `score >= 90`).
*   **`switch`**: Best for specific, discrete values (e.g., `case 'A':`, `case 'B':`). Don't forget the **`break;`** statement, or the code will "fall through" and execute the next case too!

### 6. Loop Control
*   **`for (init; cond; inc)`**: Use this when you know exactly how many times you want to loop (counter-controlled).
*   **`while (cond)`**: Use this when you want to loop until a specific condition is met (event-controlled).

