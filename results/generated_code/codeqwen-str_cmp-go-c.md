The following is the equivalent code written in C:

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char c[] = "cat";
    char d[] = "dog";
    
    // Comparing two strings for exact equality
    if (strcmp(c, d) == 0)
        printf("%s is bytewise identical to %s\n", c, d);

    // Comparing two strings for inequality (i.e., the inverse of exact equality)
    if (strcmp(c, d) != 0)
        printf("%s Is bytewise different from %s\n", c, d);

    // Comparing two strings to see if one is lexically ordered before than the other
    if (strcmp(c, d) < 0)
        printf("%s Is lexically bytewise greater than %s\n", c, d);

    // Comparing two strings to see if one is lexically ordered after than the other
    if (strcmp(c, d) > 0)
        printf("%s Is lexically bytewise less than %s\n", c, d);

    // Comparing two strings to see if one is lexically ordered after than the other or equal
    if (strcmp(c, d) >= 0)
        printf("%s Is lexically bytewise greater than or equal to %s\n", c, d);

    // Comparing two strings to see if one is lexically ordered before than the other or equal
    if (strcmp(c, d) <= 0)
        printf("%s Is lexically bytewise less than or equal to %s\n", c, d);

    // Case insensitive comparison
    char eqf[] = `when interpreted as UTF-8 and compared under Unicode simple case folding rules.`;
    int isEqual = 1;
    for (int i = 0; c[i] != '\0' && d[i] != '\0'; ++i) {
        if (!(tolower(c[i]) == tolower(d[i]))) {
            IsEqual = 0;
            break;
        }
    }

    // Prints whether the strings are equal ignoring case or not.
    if (IsEqual)
        printf("%s Is equal to %s %s\n", c, d, eqf);
    else
        printf("%s Is not equal to %s %s\n", c, d, eqf);

    return 0;
}
```

Note: C does not have direct support for string comparison that is as strong and type-safe as Go. However, the above code does a lexical case sensitive comparison and handles comparisons of numeric strings if these are not treated lexically.
