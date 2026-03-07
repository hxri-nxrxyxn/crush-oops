# Final Exam Project: The OOP Battle Arena

Congratulations on reaching the end of the mastery phases! To cement everything you've learned, you will build a **CLI Battle Arena Simulator**. This project is designed to "stress-test" your understanding of C++ memory, architecture, and logic.

## Project Goal
Create a turn-based combat system where different hero types (Warrior, Mage, Archer) can fight enemies using a polymorphic engine and dynamic memory management.

---

## Technical Requirements (The Checklist)

### 1. Phase 1: Procedural Fundamentals
*   **Game Loop:** Use a `while` loop to manage the turns.
*   **I/O Formatting:** Use `<iomanip>` (`setw`, `setfill`) to print a clean status table (Health, Mana, Level).
*   **User Input:** Use `std::cin` for combat choices and name entry.

### 2. Phase 2: Object Design
*   **Encapsulation:** All character stats (`hp`, `mp`, `strength`) must be `private`. Use getters and setters.
*   **Operator Overloading:** 
    *   Overload `<<` for the `Character` class so you can do `std::cout << player;`.
    *   Overload `==` to compare if two characters are the same level/type.
*   **Constructors:** Use **Member Initializer Lists** for all class constructors.

### 3. Phase 3: Memory Management (The "Hard" Part)
*   **Dynamic Inventory:** Each character must have a pointer to a dynamic array of `Item` objects (e.g., `Item* inventory`).
*   **The Big Three:** Because of the pointer in the inventory, you **MUST** implement:
    1.  **Destructor:** To `delete[]` the inventory memory.
    2.  **Copy Constructor:** To perform a "Deep Copy" of the inventory.
    3.  **Assignment Operator:** To safely handle `player1 = player2`.
*   **Dangling Pointers:** Ensure all deleted pointers are set to `nullptr`.

### 4. Phase 4: Software Architecture
*   **Inheritance:** Create a base `Character` class. `Warrior`, `Mage`, and `Archer` must inherit from it.
*   **Polymorphism:** 
    *   Make `attack()` and `useSpecial()` **pure virtual functions** in the base class.
    *   Use a `std::vector<Character*>` to store all active fighters.
    *   Iterate through the vector and call `.attack()`—the program must use **Dynamic Dispatch** to call the correct version.
*   **Templates:** Create a `LootBox<T>` template class that can hold any type of reward (Gold, Items, or XP).
*   **Separate Compilation:** Put class declarations in `.h` files and logic in `.cpp` files. Use **Header Guards**!

---

## Success Criteria
1.  **No Memory Leaks:** Running the game should not consume more memory over time.
2.  **No Slicing:** Derived class data must be preserved when using base class pointers.
3.  **Clean Code:** No "God Objects"—logic should be split across appropriate classes.

**Good luck, Warrior. Finish Phase 3 and 4, and we shall build this together.**
