Below is the C version of your code. It demonstrates string comparison in multiple ways:

```c
#include <ctype.h>
#include <string.h>
#include <stdio.h>

void demo_compare(const char *a, const char *b, const char *semantically) {
    printf("%s and %s are ", a, b);
    if (strcmp(a, b) == 0) printf("exactly ");
    else printf("not exactly ");

    printf("%s equal.\n", semantically);

    printf("%s and %s are ", a, b);
    if (strcmp(a, b) != 0) printf("not ");
    else printf("");

    printf("%sinequal.\n", semantically);

    printf("%s is ", a);
    if (strcmp(a, b) < 0) printf("");
    else printf("not ");

    printf("%s ordered before %s.\n", semantically, b);

    printf("%s is ", a);
    if (strcmp(a, b) > 0) printf("");
    else printf("not ");

    printf("%s ordered after %s.\n", semantically, b);
}

int main(int argc, char *argv[]) {
    const char *a = (argc > 1) ? argv[1] : "1.2.Foo";
    const char *b = (argc > 2) ? argv[2] : "1.3.Bar";

    // Case-sensitive comparisons.
    demo_compare(a, b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    char lowerA[strlen(a)+1];
    char lowerB[strlen(b)+1];

    for(int i = 0; i < strlen(a); ++i) 
        lowerA[i] = tolower((unsigned char)a[i]);

    for(int i = 0; i < strlen(b); ++i)
        lowerB[i] = tolower((unsigned char)b[i]);

    demo_compare(lowerA, lowerB, "lexically");

    // Numeric comparisons;
    double numA, numB;
    sscanf(a, "%lf", &numA);
    sscanf(b, "%lf", &numB);

    demo_compare((char *)(&numA), (char *)(&numB), "numerically");

    return 0;
}
```
This code has several differences from the original C++ version:

- The `demo_compare` function takes `const char*` arguments and uses the `strcmp` function for comparing strings. This function is part of the standard C library and works by comparing each character in the two strings until it finds a difference or reaches the end of one of the strings.
  
- For case-insensitive comparison, I've used the `tolower` function from the `ctype.h` library to convert all characters in both strings to lowercase before calling `strcmp`.

- The `sscanf` function is used for numeric comparisons. This function reads formatted input from a string and stores it into variables.

Note that C doesn't support templates as C++. Therefore, type checking is performed at compile time instead of runtime, and you need to explicitly cast your data types when passing them to functions. Also, C doesn't support exceptions like C++, so error handling is usually done using return codes or special sentinel values instead.
