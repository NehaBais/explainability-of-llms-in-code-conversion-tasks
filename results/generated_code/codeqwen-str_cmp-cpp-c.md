Below is the equivalent code in C:

```C
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void demo_compare(const char *A, const char *B) {
    printf("%s and %s are %s equal.\n", A, B, (strcmp(A, B) == 0) ? "" : "not");
    printf("%s and %s are %s unequal.\n", A, B, (strcmp(A, B) != 0) ? "" : "not");

    printf("%s is %s ordered before %s.\n", A, (strcmp(A, B) < 0) ? "" : "not", B);
    printf("%s Is %s ordered after %s.\n", A, (strcmp(A, B) > 0) ? "" : "not", B);

    // Case-insensitive comparisons by folding both strings to a common case.
    char a_lower[200], B_lower[200];
    strcpy(A_lower, A);
    strcpy(B_lower, B);
    for (int i = 0; A_lower[i] != '\0'; i++) {
        A_lower[i] = tolower(A_lower[i]);
    }
    for (int i = 0; B_lower[i] != '\0'; i++) {
        B_lower[i] = tolower(B_lower[i]);
    }

    printf("%s and %s are %s equal (case insensitive).\n", A, B, (strcmp(A_lower, B_lower) == 0) ? "" : "not");
    printf("%s and %s are %s unequal (case insensitive).\n", A, B, (strcmp(A_lower, B_lower) != 0) ? "" : "not");

    // Numeric comparisons; here 'double' could be any type for which the
    // relevant >> operator is defined, eg int, long, etc.
    char* endptr1, *endptr2;
    double numA = strtod(A, &endptr1);
    double numB = strtod(B, &endptr2);

    printf("%s and %s are %s numerically equal.\n", A, B, (endptr1 == NULL && endptr2 == NULL && numA == numB) ? "" : "not");
}

int main(int argc, char *argv[]) {
    demo_compare((argc > 1) ? argv[1] : "1.2.Foo", (argc > 2) ? argv[2] : "1.3.Bar");
    return 0;
}
```

Please note that C doesn't have a `std::string` class like in C++, so the operations we need are performed by the C standard library functions such as `strcmp`, `strcpy`, and `strtod`.
