Sure! Below is the equivalent code from Java to C:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *adjective = "little";
    char *lyric = (char *)malloc(strlen("Mary had a ") + strlen(adjective) + 1);
    
    if (lyric == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return EXIT_FAILURE;
    }
    
    snprintf(lyric, strlen("Mary had a ") + strlen(adjective) + 1, "Mary had a %s lamb", adjective);
    
    printf("%s\n", lyric);
    
    free(lyric);
    
    return EXIT_SUCCESS;
}
```

### Explanation:
1. **Memory Allocation**: We allocate memory for the new string using `malloc`. The length of the new string is calculated by adding the lengths of "Mary had a ", the size of the allocated array, and 1 (for the null terminator).
2. **String Concatenation**: We use `snprintf` to concatenate the strings "Mary had a " with the user-provided adjective.
3. **Output**: We print the concatenated string using `printf`.
4. **Free Memory**: Finally, we free the allocated memory using `free` to avoid memory leaks.

### Note:
- Ensure that you handle memory allocation and deallocation properly in C to avoid memory leaks or other issues.
- The use of dynamic memory (`malloc`) is necessary because the length of the string might vary depending on the input.
