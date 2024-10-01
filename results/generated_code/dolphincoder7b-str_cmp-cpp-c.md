This is a rough translation of the given C++ code into C. For more accurate translations, please provide the target language and I can re-evaluate.

The equivalent C code would look something like this:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // For tolower()

void demo_compare(const char *a, const char *b, const char *semantically) {
    printf("%s and %s are %s %s equal.\n", a, b, (strcmp(a, b) == 0 ? "" : "not "), semantically);

    printf("%s and %s are %s %s inequal.\n", a, b, (strcmp(a, b) != 0 ? "" : "not "), semantically);

    printf("%s is %s %s ordered before %s.\n", a, (strcmp(a, b) < 0 ? "" : "not "), semantically, b);

    printf("%s is %s %s ordered after %s.\n", a, (strcmp(a, b) > 0 ? "" : "not "), semantically, b);
}

int main(int argc, char *argv[]) {
    // Case-sensitive comparisons.
    char a[128] = (argc > 1) ? argv[1] : "1.2.Foo";
    char b[128] = (argc > 2) ? argv[2] : "1.3.Bar";
    demo_compare(a, b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    for (char *p = a; *p != '\0'; p++)
        *p = tolower(*p);
    for (char *p = b; *p != '\0'; p++)
        *p = tolower(*p);
    demo_compare(a, b, "lexically");

    // Numeric comparisons. Note that in C, 'double' could be any type for which the relevant
    // comparison operator is defined, eg int, long, etc.
    char *end;
    double numA = strtod(a, &end);
    double numB = strtod(b, &end);
    demo_compare(&numA, &numB, "numerically");

    return (strcmp(a, b) == 0);
}
```

Please note that there is no direct equivalent for `istringstream`, `ostringstream` or `std::string.substr()`, as these are not supported in C. However, you can achieve a similar functionality by using `strtok()` and `sprintf()`. 

If you're looking for more accurate translations, please provide the target language.
