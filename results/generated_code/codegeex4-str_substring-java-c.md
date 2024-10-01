The Java string operations you've provided are not directly translatable into C without additional logic to handle Unicode code points due to the difference in language capabilities and handling of strings.

Here's a basic example on how one might approach this task using C, but note that it may require adjustments depending on the exact requirements and specifics such as how the input string is defined and passed to these functions:

In C you have to manually handle Unicode characters because there is no direct built-in support for Unicode like in Java. However, if your program uses UTF-8 encoding (common in many systems), you can at least work with a single byte per character.

```c
#include <stdio.h>
#include <string.h>

// Function to extract substring by index and length
void Substring(char* str, int n, int m, char* result) {
    strncpy(result, str + n, m);
    result[m] = '\0';
}

// Function to extract substring from a given index until the end of the string
void SubstringEnd(char* str, int n, char* result) {
    strcpy(result, str + n);
}

// Function to remove the last character from a string and store it in another variable
void RemoveLastChar(char* str, char* result) {
    strncpy(result, str, strlen(str) - 1);
    result[strlen(str) - 1] = '\0';
}

// Functions to extract substring by character or substring occurrence would need additional logic to handle Unicode code points. 
```

Remember that C does not natively support multi-byte encodings like Java does with UTF-8 or UTF-16, so handling Unicode (especially characters outside of the Basic Multilingual Plane) can be much more complex and is often best done using a library such as ICU.

For functions like `Substring(String str, char c, int m)` and `Substring(String str, String sub, int m)`, you would need to write additional code to find the index of the character or substring. These are just simple examples that do not fully address your needs in terms of full Unicode support.

Note: Please adjust according to your requirements and make sure to handle memory allocation properly in C if necessary.
