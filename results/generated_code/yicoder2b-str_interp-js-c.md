Sure, here is how you can convert this JavaScript code into C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char original[] = "Mary had a X lamb";
    const char *little = "little";
    char replaced[100];
    strcpy(replaced, original);
    size_t n = strlen(original);
    for (size_t i = 0; i < n; ++i) {
        if (original[i] == 'X') {
            strncat(replaced + i, little, sizeof little - 1);
            break;
        }
    }
    printf("Original string: %s\n", original);
    printf("Replaced string: %s\n", replaced);
    return 0;
}
```
In this C program, we first copy the `original` string to `replaced`. Then, we iterate through each character of the `original` string and if we find an 'X', replace it with the actual value of `little`. The final replaced string is then printed out.
