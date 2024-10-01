The given code is already written in C. There's no need to convert this code from C to C++ as it doesn't contain any C++ specific features or functionalities that are not available in C. 

However, if you want to rewrite the function declarations and definitions in a C style syntax for learning purposes, here's how you can do it:

```c
#include <string.h>
#include <stdio.h>

int startsWith(const char* container, const char* target);

int endsWith(const char* container, const char* target);

int doesContain(const char* container, const char* target);

int main(void) {
  printf("Starts with Test ( Hello,Hell ) : %d\n", startsWith("Hello","Hell")));
  printf("Ends with Test ( Code,ode ) ) : %d\n", endsWith("Code","ode"));
  printf("Contains Test ( Google,msn ) ) : %d\n", doesContain("Google","msn"));

  return 0;
}
```
In the updated code, I've added a semicolon (;) at the end of each function declaration line. This is required in C syntax for declaring multiple function prototypes in a single source file.
