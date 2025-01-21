Error: `printf` is not declared in the standard library, so the compiler cannot find its declaration. To resolve this error, we must include the `<stdio.h>` header file, which declares the `printf` function.
Fix: Add `#include` directive for `<stdio.h>` before the function calls that use `printf`.
Rewritten code block:
```c
#include
#include
int main() {
  char str1[] = "abcd";
  char str2[] = "ab";
  char str3[] = "zn";
  int i;

  // Determine if str1 starts with str2
  printf("%d", !strcmp(str1, str2));

  // Determine if str1 contains str2 at any location
  for (i = 0; i <= strlen(str1) - strlen(str2); i++) {
    if (!strcmp(&str1[i], str2)) {
      printf("Match found at position %d", i);
      break;
    }
  }

  // Determine if str1 ends with str3
  printf("%d", !strcmp(str1, str3));

  return 0;
}
```
Explanation: The error occurred because the `printf` function was not declared in the standard library, so the compiler could not find its declaration. To resolve this issue, we included the `<stdio.h>` header file, which declares the `printf` function. This allowed us to use the `printf` function without encountering a compilation error.

