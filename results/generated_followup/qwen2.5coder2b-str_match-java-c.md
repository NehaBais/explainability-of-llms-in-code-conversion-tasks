The error messages indicate that there are incompatible pointer to integer conversions when comparing string pointers with integers. This is because the `strstr` function in C returns a pointer to the first occurrence of the substring, not an integer index.

To fix this issue, you need to compare the returned pointer against the start of the string `str1`. Here's the corrected code:

```c
#include <stdio.h>
#include <string.h>

int startsWith(const char *str1, const char *str2) {
  int i;
  for (i = 0; str2[i] != '\0'; i++) {
    if (str1[i] != str2[i]) {
      return 0; // Not a match
    }
  }
  return 1; // Matches
}

int endsWith(const char *str1, const char *str2) {
  int len1 = strlen(str1);
  int len2 = strlen(str2);
  for (int i = 0; i < len2; i++) {
    if (str1[len1 - len2 + i] != str2[i]) {
      return 0; // Not a match
    }
  }
  return 1; // Matches
}

int contains(const char *str1, const char *str2) {
  int pos = 0;
  while ((pos = strstr(str1 + pos, str2)) != NULL) {
    printf("Found occurrence of 'ab' at index %d\n", pos);
    pos++; // Move to the next character after the match
  }
  return 0; // No more matches found
}

int main() {
  const char *str1 = "Hello, World!";
  const char *str2 = "World!";

  if (startsWith(str1, str2)) {
    printf("String starts with 'World!'\n");
  } else {
    printf("String does not start with 'World!'\n");
  }

  if (endsWith(str1, str2)) {
    printf("String ends with 'World!'\n");
  } else {
    printf("String does not end with 'World!'\n");
  }

  if (contains(str1, str2)) {
    printf("String contains 'World!'\n");
  } else {
    printf("String does not contain 'World!'\n");
  }

  return 0;
}
```

This code will correctly compare the strings and print out whether they start with, end with, or contain a specific substring.
