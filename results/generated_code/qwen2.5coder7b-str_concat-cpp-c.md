Sure, here is the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Create a string variable equal to any text value.
    char s[] = "hello";

    printf("%s literal\n", s);

    // Dynamically allocate memory for the new string and concatenate it with another string literal
    size_t len1 = strlen(s);
    size_t len2 = strlen(" literal");
    char* s2 = (char*)malloc((len1 + len2 + 1) * sizeof(char)); 

    if (s2 == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return -1;
    }

    strcpy(s2, s);
    strcat(s2, " literal");

    printf("%s\n", s2);

    // Don't forget to free the allocated memory
    free(s2);

    return 0;
}
```

Explanation:
1. **Static Allocation**: In C++, `std::string` automatically handles memory allocation and deallocation. However, in C, strings are arrays of characters and you need to manually manage memory.
   - `char s[] = "hello";` declares a character array `s` with the value `"hello"`.

2. **String Concatenation**: 
   - First, calculate the lengths of both strings using `strlen`.
   - Then, allocate enough memory for both strings and the null terminator (`'\0'`) using `malloc`.
   - Use `strcpy` to copy the first string into `s2`, then use `strcat` to append the second string.

3. **Memory Management**: Always ensure to free dynamically allocated memory when it is no longer needed, as in this case with `free(s2);`.

This code will produce the same output as your C++ code:

hello literal
hello literal
