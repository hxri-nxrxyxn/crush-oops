// Concept: C-Strings
// Reference: Ch 5
// Why: C-strings are null-terminated character arrays.

#include <iostream>

int main() {
    char s[] = "C++";
    std::cout << s << " size: " << sizeof(s) << std::endl;
    return 0;
}

// TODO: Manually change s[1] to '+' and s[2] to '\0' and print.
