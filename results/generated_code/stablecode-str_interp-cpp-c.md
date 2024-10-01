The equivalent C code using the `strreplace` function from string.h would be as follows:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char original[] = "Mary had a X lamb.";
    char toBeReplaced[] = "X";
    char replacement[] = "little";

    // Calculate the length of the new string, accounting for null terminator
    size_t newStringLength = strlen(original) - strlen(toBeReplaced) + strlen(replacement);

    // Allocate memory for the new string
    char *newString = malloc(newStringLength + 1)); // +1 for null terminator

    // Perform the string replacement using strreplace function
    strreplace(original, toBeReplaced, replacement, &newString);

    // Print the final replaced string
    printf("String after replacement: %s\n", newString);

    // Free the allocated memory for the new string
    free(newString);

    return 0;
}
```
This C code first calculates the length of the new string by accounting for null terminator. Then, it dynamically allocates memory for the new string. After that, it uses the `strreplace` function to perform the string replacement. Finally, it prints the final replaced string and frees the allocated memory for the new string.
