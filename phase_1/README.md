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
