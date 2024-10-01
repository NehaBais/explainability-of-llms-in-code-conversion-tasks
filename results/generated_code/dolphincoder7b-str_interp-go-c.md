### Pseudocode:

DEFINE main()
    STRING str ← "Mary had a %s lamb."
    STRING txt ← "little"
    STRING out ← FORMAT_STRING(str, txt)
    PRINT out
END

FORMAT_STRING(str, val):
    RETURN string.replace("%s", val)


### Code:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Mary had a %s lamb.";
    char txt[] = "little";
    char out[50];

    sprintf(out, str, txt);
    printf("%s\n", out);

    return 0;
}
```

The `main` function is used to declare and initialize two strings: `str` which represents the original string and `txt`, which represents a variable value that will be substituted in place of `%s`. The `sprintf()` function is then used to create a new string `out` with the contents of `str` replacing any occurrence of `%s` with the contents of `txt`. Finally, this newly formed string `out` is printed using `printf()`.
