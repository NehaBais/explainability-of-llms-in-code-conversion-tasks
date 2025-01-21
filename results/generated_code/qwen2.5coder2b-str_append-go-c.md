To convert this Go code to C, you can use the following code snippet:

```c
#include <stdio.h>
#include <string.h>

int main() {
  char s[100]; // Declare a character array of size 100
  strcpy(s, "foo"); // Copy the first string into the array
  strcat(s, "bar"); // Append the second string to the array
  printf("%s\n", s); // Print the concatenated string
  return 0;
}
```

In this C code, we declare a character array `s` of size 100. We then use `strcpy` to copy the first string "foo" into the array `s`, and `strcat` to append the second string "bar" to `s`. Finally, we print the concatenated string using `printf`.

The `strcpy` function copies the contents of the source character array (`src`) to the destination character array (`dest`). It does not add a null terminator character after the copied data. Hence, if you want to ensure that the resulting string has a null terminator, you should use `strcat_s` instead.
