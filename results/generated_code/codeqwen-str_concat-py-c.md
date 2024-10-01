Here is the equivalent code in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "hello";
    printf("%s world\n", s1);

    strcat(s1, " world");
    printf("%s\n", s1);

    char s2[100];
    sprintf(s2, "%s, %s, %s", s1, "world", "mom");
    printf("%s\n", s2);

    strcat(s2, ", mom");
    printf("%s\n", s2);
}
```

This C code does the same operations as your Python code: 

- Create a string variable equal to any text value.
- Concatenate another string literal with this variable.
- Print the content of the variables.
