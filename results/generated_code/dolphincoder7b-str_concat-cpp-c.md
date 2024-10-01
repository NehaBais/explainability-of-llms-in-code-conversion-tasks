### Pseudocode:
s = "hello"
Print(s + " literal")
s2 = s + " literal"
Print(s2)

### Code
```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "hello";
    printf("%s literal\n", s);
    char s2[sizeof(s) + sizeof(" literal")];
    strcpy(s2, s);
    strcat(s2, " literal");
    printf("%s\n", s2);
    return 0;
}
```

Note: In C++, it's impossible to concatenate two string literals. In C, you can use the `sizeof` operator on a string variable and add the sizes of both strings for the size of the concatenated string. The `strcat()` function from the C standard library is used to concatenate strings in this way.
