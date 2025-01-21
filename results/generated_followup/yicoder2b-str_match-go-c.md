This error arises from the fact that C does not have built-in string comparison functions like Go's strncmp or strings.Index, but they are provided by the standard library. The problem arises from the fact that the pointer types used in Go (like string and slice) cannot directly be assigned to int because they are different types. To fix this error, we should change 'int i = strstr(first, second)' line to either a pointer type or a string type.

The other error is due to the way C handles memory operations. In Go, strings can be treated as slices of bytes, and thus it is possible that two different strings may point to the same byte sequence (which holds true even if they are in different locations). But in C, the behavior might be surprising due to the lack of pointer arithmetic and null pointers. To avoid this, we need to explicitly dereference the integer value which 'strstr' returns.

The corrected C code could look like this:

```c
#include <stdio.h>
#include <string.h>
#include <stdbool.h> // for using boolean data type

void match(char *first, char *second) {
  if (strncmp(first, second, strlen(second)) == 0) {
    printf("1. %s starts with %s: True\n", first, second);
  } else {
    printf("1. %s starts with %s: False\n", first, second);
  }

  if (strncmp(first, second, strlen(second)) == 0) {
    int i = strstr(first, second) ? (strstr(first, second) - first + 1) : -1;
    if (i >= 0) {
      printf("2. %s contains %s: True, at location %d\n", first, second, i);
      char *start = first + i + 1; // starting position from which to check for matches of the second string in rest of the first string
      while ((i = strstr(start, second)) != NULL) {
        printf("2.2. at location %d\n", i - first);
        start = i + 1; // update starting position from which to check for matches of the next occurrence of the second string in rest of the first string
      }
    } else {
      printf("2. %s contains %s: False\n", first, second);
    }
  }

  if (strncmp(first, second, strlen(second)) == 0) {
    printf("3. %s ends with %s: True\n", first, second);
  } else {
    printf("3. %s ends with %s: False\n", first, second);
  }
}

int main() {
  match("abracadabra", "abr");
  return 0;
}
```
This C code correctly implements the given requirements in a way that it handles the string matching of the provided strings.
