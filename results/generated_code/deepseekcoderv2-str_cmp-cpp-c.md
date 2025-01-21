 Below is the equivalent code in C, demonstrating how to compare strings and handle various types of comparisons as described. The language used here is C, which does not have built-in string handling like C++ but uses standard library functions from the C Standard Library (glibc).

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void demo_compare(const char *a, const char *b, const char *semantically) {
    printf("%s and %s are %sequal.\n", a, b, (strcmp(a, b) == 0 ? "" : "not "));
    printf("%s and %s are %sinequal.\n", a, b, (strcmp(a, b) != 0 ? "" : "not "));
    printf("%s is %sordered before %s.\n", a, (strcmp(a, b) < 0 ? "" : "not "), b);
    printf("%s is %sordered after %s.\n", a, (strcmp(a, b) > 0 ? "" : "not "), b);
}

void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

int main(int argc, char **argv) {
    // Ensure there are enough arguments passed.
    if (argc < 3) {
        printf("Usage: %s string1 string2\n", argv[0]);
        return 1;
    }

    // Case-sensitive comparisons.
    const char *a = argv[1];
    const char *b = argv[2];
    demo_compare(a, b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    char a_copy[strlen(a) + 1];
    strcpy(a_copy, a);
    to_lowercase(a_copy);
    char b_copy[strlen(b) + 1];
    strcpy(b_copy, b);
    to_lowercase(b_copy);
    demo_compare(a_copy, b_copy, "lexically");

    // Numeric comparisons; here 'double' could be any type for which the relevant conversion is defined.
    double numA = strtod(a, NULL);
    double numB = strtod(b, NULL);
    demo_compare((numA == numB) ? "numeric" : "", (numA != numB) ? "numeric" : "", "numerically");

    return 0;
}
```

### Explanation:
1. **String Comparison**: Uses `strcmp` for comparing strings in a case-sensitive manner and modified versions (`strcpy`, `tolower`) for case-insensitive comparison by copying and transforming the string to lowercase.
2. **Numeric Comparisons**: Utilizes `strtod` to convert strings to numeric types (`double` in this case) and then compares these numbers using standard comparison operators.
3. **General Comparison Function**: A generic function `demo_compare` is used for displaying results of comparisons, abstracting the specific operations to avoid code repetition.
4. **Case Insensitivity Handling**: Converts strings to lowercase within a separate function (`to_lowercase`) before performing case-insensitive comparison.
5. **Usage**: The program expects command line arguments for string inputs and performs the specified comparisons based on these inputs.

This C code mirrors the functionality of the provided C++ example, demonstrating how to handle different types of comparisons in a language that does not inherently support certain aspects as gracefully as C++.
