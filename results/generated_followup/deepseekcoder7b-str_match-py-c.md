The error message is indicating that some parts of the code are not assignable, which means they cannot be modified once they have been set (e.g., `loc` or `next`). The second part of the error message indicates an issue with identifiers. 

To fix this, we need to remove the unassignable expressions and use a proper way to print result for both integer and string types. Here is the corrected code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to determine if first string starts with second string
int startswith(const char *str, const char *pre) {
    return strncmp(str, pre, strlen(pre)) == 0;
}

// The function endswith is not directly provided by C Standard Library. Hence its implementation
int endswith(const char *str, const char *suf) {
    size_t lenstr = strlen(str);
    size_t lensuf = strlen(suf);
    if (lensuf > lenstr) return 0;
    return strncmp(str + lenstr - lensuf, suf, lensuf) == 0;
}

// Function to find an instance of a substring within another string.
const char *find_substring(const char *str, const char *substr) {
    return strstr(str, substr);
}

int main() {
    // Calling the functions with examples from your Python code and printing results:
    
    printf("%s\n", startswith("racecar", "rac") ? "True" : "False"); 
    printf("%s\n", endswith("racecar", "car") ? "True" : "False");  
    printf("%s\n", find_substring("Hello, world.", "world.") != NULL ? "True" : "False");  
    
    return 0;
}
```
This code will correctly compile and run. The functions `startswith`, `endswith` and `find_substring` are implementations of the functionality in Python you were trying to achieve with C. These functions have been modified to return boolean values (1 for true and 0 for false) that can then be converted into "True" or "False" strings for printing purposes. The `main` function demonstrates these functions on a few examples.

