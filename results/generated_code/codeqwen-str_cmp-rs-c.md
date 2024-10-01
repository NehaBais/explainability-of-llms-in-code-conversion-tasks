C does not have built-in support for case-insensitive comparison, but it can be achieved using platform-specific APIs (like strcasecmp or _stricmp on Windows). The following code is a demonstration of how to achieve the same:

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // only same types can be compared
    char A[] = "abc";
    char b[] = "Bac";

    // Strings are coerced to &str when borrowed and needed
    if (strcmp(A, b) == 0) {
        printf("The strings are equal\n");
    } else if (strcmp(A, b) > 0) {
        printf("The first string is lexically after the second\n");
    } else if (strcmp(A, b) < 0) {
        printf("The first string is lexically before the second\n");
    }

    // case-insensitive comparisons:
    char A2[50];
    char b2[50];
    int i;

    for (i = 0; A[i] != '\0'; i++) {
        A2[i] = tolower(A[i]);
    }
    A2[i] = '\0';

    for (i = 0; b[i] != '\0'; i++) {
        b2[i] = tolower(b[i]);
    }
    b2[i] = '\0';

    if (strcmp(A2, b2) == 0) {
        printf("Both strings are equal when ignoring case\n");
    } else if (strcmp(A2, b2) > 0) {
        printf("The first string is lexically after the second when ignoring case\n");
    } else if (strcmp(A2, b2) < 0) {
        printf("The first string is lexically before the second when ignoring case\n");
    }

    return 0;
}
```

However, C does not have a direct equivalent to Rust's `to_ascii_uppercase()` and `to_ascii_lowercase()`. Therefore, in this example, we manually convert the strings to lowercase.

C also doesn't natively support numeric string comparison or other comparisons with type systems.
