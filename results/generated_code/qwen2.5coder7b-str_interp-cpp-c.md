To convert the given C++ code to C, you need to use basic string handling functions from the C standard library. Here is how you can achieve the same functionality in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
   char original[] = "Mary had a X lamb.";
   const char *toBeReplaced = "X";
   char replacement[] = "little";

   // Find the position of toBeReplaced in original
   char *pos = strstr(original, toBeReplaced);
   
   if (pos != NULL) {
      // Calculate new length after replacement
      int len = strlen(original) - strlen(toBeReplaced) + strlen(replacement);

      // Allocate memory for the new string
      char *newString = malloc(len + 1); // +1 for null terminator

      // Copy part before toBeReplaced
      strncpy(newString, original, pos - original);
      newString[pos - original] = '\0';

      // Concatenate replacement
      strcat(newString, replacement);

      // Concatenate the rest of original after toBeReplaced
      strcat(newString, pos + strlen(toBeReplaced));

      printf("String after replacement: %s\n", newString);
      
      // Free allocated memory
      free(newString);
   } else {
      printf("Substring not found.\n");
   }

   return 0;
}
```

### Explanation:

1. **Finding the Position**:
   - `strstr(original, toBeReplaced)` finds the first occurrence of the substring `toBeReplaced` in `original`.

2. **Allocating Memory**:
   - Calculate the length of the new string after replacement.
   - Use `malloc()` to allocate memory for the new string.

3. **Copying and Concatenating**:
   - Copy the part of the original string before the substring to be replaced.
   - Concatenate the replacement string.
   - Concatenate the rest of the original string after the substring to be replaced.

4. **Freeing Memory**:
   - Free the allocated memory after printing the result to avoid memory leaks.

This code should work similarly to your C++ version, replacing "X" with "little" in the given string and printing the new string.
