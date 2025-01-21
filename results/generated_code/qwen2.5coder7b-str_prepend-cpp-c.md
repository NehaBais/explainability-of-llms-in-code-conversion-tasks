To convert the given C++ code to C, you need to use character arrays (strings) and manually handle the concatenation of strings since C does not have built-in string manipulation functions like `std::string` in C++. Here's how you can do it:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Define character arrays for the strings
    char myStrings[2][50] = {"prepended to", "my string"};
    
    // Determine the length of each string and allocate space for the concatenated result
    int len1 = strlen(myStrings[0]);
    int len2 = strlen(myStrings[1]);
    char* prepended = (char*)malloc((len1 + len2 + 1) * sizeof(char));
    
    if (prepended == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return -1;
    }
    
    // Concatenate the strings
    strcpy(prepended, myStrings[0]);
    strcat(prepended, myStrings[1]);
    
    // Output the concatenated string
    printf("%s\n", prepended);
    
    // Free the allocated memory
    free(prepended);
    
    return 0;
}
```

### Explanation:
1. **Character Arrays**: Instead of using `std::string`, we use character arrays (`char`) to store strings.
2. **Memory Allocation**: We allocate enough memory for both input strings and a null terminator using `malloc`.
3. **String Concatenation**:
   - `strcpy(prepended, myStrings[0])`: Copies the first string into `prepended`.
   - `strcat(prepended, myStrings[1])`: Appends the second string to `prepended`.
4. **Output**: We use `printf` to print the concatenated string.
5. **Memory Management**: It's important to free the allocated memory using `free` after you're done with it.

This C code achieves the same result as the given C++ code, concatenating two strings and printing the result.
