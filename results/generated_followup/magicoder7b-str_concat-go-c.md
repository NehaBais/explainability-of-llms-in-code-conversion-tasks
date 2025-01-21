 The error is caused by the fact that C doesn't natively support function prototypes for standard library functions like `strcpy()` or `strcat()`. It expects these functions to be declared before use, which isn't done in this particular example. You need to include `<string.h>` header file at the top of your code to resolve this issue.

Corrected Code:
```c
#include <stdio.h>
#include <string.h> // Include string.h for function prototypes
#define MAX_SIZE 100

int main() {
  char s[MAX_SIZE] = "hello";
  printf("%s\n", s);
  
  char s2[MAX_SIZE];
  strcpy(s2, s); // Copy 's' into 's2'
  strcat(s2, " literal"); // Append string literal to 's2'
  printf("%s\n", s2);
  
  return 0;
}
```
This will resolve the issue of the undeclared function call and the corrected code can be compiled successfully.
