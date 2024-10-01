```c
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
 
// Function to get a substring from the given string
char* Substring(const char* str, int n, int m) {
    size_t len = strlen(str);
 
    // Check if the start index is out of range
    if (n >= len)
        return "";
 
    // Find the length of the substring
    size_t substr_len;
    if (m > 0)
        substr_len = m <= len - n ? m : len - n;
    else
        substr_len = len - n;
 
    // Create a temporary buffer and copy the substring to it
    char* substr = malloc(substr_len + 1);
    strncpy(substr, str + n, substr_len);
    substr[substr_len] = '\0';
 
    return substr;
}
 
int main() {
    char str[] = "Hello World";

    // Test the function with different start and end indices
    printf("Substring from %d to %d: %s\n", 2, 7, Substring(str, 2, 7)); // "llo Wor"
    printf("Substring from %d to the end of string: %s\n", 3, Substring(str, 3)); // "lo World"
    printf("Substring from start of string till second last character: %s\n", Substring(str, 0, str.length() - 2)); // "Hello Worl"
    printf("Substring starting with 'l' and of length 5: %s\n", Substring(str, 'l', 5)); // "lo Wor"
    printf("Substring starting with 'He' and of length 3: %s\n", Substring(str, "He", 3)); // "Hel"
 
    return 0;
}
```
In C++, a String class is used instead of the raw string to handle Unicode characters properly. Here's how the conversion would look like in C++:

#include <iostream>
 
// Function to get a substring from the given string
std::string Substring(const std::string& str, int n, int m) {
    size_t len = str.length();
 
    // Check if the start index is out of range
    if (n >= len)
        return "";
 
    // Find the length of the substring
    size_t substr_len;
    if (m > 0)
        substr_len = m <= len - n ? m : len - n;
    else
        substr_len = len - n;
 
    // Return the substring
    return str.substr(n, substr_len);
}
 
int main() {
    std::string str("Hello World");

    // Test the function with different start and end indices
    std::cout << "Substring from " << 2 << " to " << 7 << ": " << Substring(str, 2, 7) << std::endl; // "llo Wor"
    std::cout << "Substring from " << 3 << " to the end of string: " << Substring(str, 3) << std::endl; // "lo World"
    std::cout << "Substring from start of string till second last character: " << Substring(str, 0, str.length() - 2) << std::endl; // "Hello Worl"
    std::cout << "Substring starting with 'l' and of length 5: " << Substring(str, 'l', 5) << std::endl; // "lo Wor"
    std::cout << "Substring starting with 'He' and of length 3: " << Substring(str, "He", 3) << std::endl; // "Hel"
 
    return 0;
}

