To convert the given C++ code to C, you need to use `str_replace` function from `<string>` library. Here is a step-by-step conversion:

1. Include necessary headers.
2. Declare variables and strings.
3. Use `strstr` to find the position of the word to be replaced.
4. Use `str_replace` to replace the found substring with the replacement string.

Here's the C version of your code:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char original[] = "Mary had a X lamb.";
    char toBeReplaced[] = "X";
    char replacement[] = "little";

    // Find the position of the substring to replace
    char *pos = strstr(original, toBeReplaced);

    if (pos != NULL) {
        // Replace the found substring with the replacement string
        size_t length = strlen(toBeReplaced);
        str_replace(pos, length, replacement);

        // Print the new string after replacement
        printf("String after replacement: %s\n", original);
    } else {
        printf("Substring not found in the original string.\n");
    }

    return 0;
}

// Define str_replace function for demonstration purposes
void str_replace(char *str, size_t pos, const char *replacement) {
    // Calculate the new length of the string after replacement
    size_t len = strlen(str);
    size_t newlen = pos + strlen(replacement);

    // Shift characters to make space for the replacement
    for (size_t i = len; i >= pos + strlen(replacement); --i) {
        str[i] = str[i - strlen(replacement)];
    }

    // Copy the replacement string into the position of the substring
    strcpy(str + pos, replacement);
}
```

### Explanation:
1. **Include Headers**: The headers `<stdio.h>` and `<string.h>` are included to handle input/output operations and string manipulation.
2. **Declare Variables**: `original`, `toBeReplaced`, and `replacement` variables are declared to hold the original string, the substring to be replaced, and the replacement string, respectively.
3. **Find Position**: The `strstr` function is used to find the position of the substring "X" in the original string.
4. **Replace Substring**: If the substring is found, it is replaced with the replacement string using `str_replace`.
5. **Print Result**: The new string after replacement is printed.
6. **Custom `str_replace` Function**: A custom function `str_replace` is defined for demonstration purposes. This function shifts characters to make space for the replacement and then copies the replacement string.

This C version should work correctly and achieve the same result as the original C++ code.
