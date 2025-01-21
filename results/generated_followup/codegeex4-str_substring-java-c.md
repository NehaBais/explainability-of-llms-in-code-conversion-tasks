The error message indicates that the linker cannot find the definition for `main()`, which is the entry point of C programs. In C, every standalone program must have exactly one `main()` function to start execution.

To fix this, you need to add a `main()` function to your C program and ensure it includes a return statement at the end. Here's how you can correct your code:

```c
#include <stdio.h>
#include <string.h>

void Substring(char *str, int n, int m, char *result) {
  strncpy(result, str + n, m);
  result[m] = '\0';
}

void SubstringEnd(char *str, int n, char *result) { strcpy(result, str + n); }

void RemoveLastChar(char *str, char *result) {
  strncpy(result, str, strlen(str) - 1);
  result[strlen(str) - 1] = '\0';
}

int main() {
  char input[100] = "example string";
  char output[50];

  Substring(input, 2, 5, output);  // Example usage
  printf("Substring from index 2 of length 5: %s\n", output);

  SubstringEnd(input, 2, output);
  printf("Substring from index 2 to end: %s\n", output);

  RemoveLastChar(input, output);
  printf("String without last character: %s\n", output);

  return 0;
}
```

The corrected code includes a `main()` function that calls the defined substring functions and prints their results. This ensures that the program has an entry point for execution and will compile successfully in C.
