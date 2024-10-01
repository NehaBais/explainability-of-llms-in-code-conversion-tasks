 In C language, we don't have direct support for strings as the STL in C++. So all string operations will be manually done. The following code implements the same functionality as the provided C++ code but in pure C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void demo_compare(const char *a, const char* b) {
    printf("%s and %s are ", a, b);
    if (strcmp(a, b) == 0) {
        printf("exactly lexically equal.\n");
    } else {
        printf("not exactly lexically equal.\n");
    }
    
    printf("%s and %s are ", a, b);
    if (strcmp(a, b) != 0) {
        printf("lexically inequal.\n");
    } else {
        printf("lexically equal.\n");
    }

    printf("%s is ", a);
    if (strcmp(a, b) < 0) {
        printf("lexically ordered before %s.\n", b);
    } else {
        printf("not lexically ordered before %s.\n", b);
    }
    
    printf("%s is ", a);
    if (strcmp(a, b) > 0) {
        printf("lexically ordered after %s.\n", b);
    } else {
        printf("not lexically ordered after %s.\n", b);
    }
}

int main(int argc, char *argv[]) {
    // Case-sensitive comparisons.
    const char* a = (argc > 1) ? argv[1] : "1.2.Foo";
    const char* b = (argc > 2) ? argv[2] : "1.3.Bar";
    demo_compare(a, b);
    
    // Case-insensitive comparisons by folding both strings to a common case.
    int i;
    for (i=0; i < strlen(a); i++) {
        a[i] = tolower((unsigned char)a[i]);
        b[i] = tolower((unsigned char)b[i]);
    }
    
    demo_compare(a, b);
    
    // Numeric comparisons; here 'double' could be any type for which the
    // relevant >> operator is defined, eg int, long, etc.
    double numA = atof(argv[1]);
    double numB = atof(argv[2]);
    demo_compare(numA, numB);

    if (strcmp(a, b) == 0) {
        return EXIT_SUCCESS;
    } else {
        return EXIT_FAILURE;
    }
}
```
Please note that C does not have dynamic typing and we need to manually handle all type conversions like string comparison to double. Also, in C there are no templates so we use different functions for different types of comparisons. The code may require some tweaks based on how the input strings should be parsed.
