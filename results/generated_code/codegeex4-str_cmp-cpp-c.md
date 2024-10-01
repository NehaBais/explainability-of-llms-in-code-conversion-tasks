Below is the C version of your code. The comparison logic in C differs slightly from C++ due to differences between the languages:

```C
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void demo_compare(const char *a, const char *b, const char* semantically) {
    if(strcmp(a,b)==0)
        printf("%s and %s are exactly %s equal.\n", a, b, semantically);
    else
        printf("%s and %s are not %s equal.\n", a, b, semantically);

    if(strcmp(a,b)!=0)
        printf("%s and %s are %s inequal.\n", a, b, semantically);
    else
        printf("%s and %s are not %s inequal.\n", a, b, semantically);

    if(strcmp(a,b)<0)
        printf("%s is lexically ordered before %s.\n", a, b);
    else
        printf("%s is not lexically ordered before %s.\n", a, b);

    if(strcmp(a,b)>0)
        printf("%s is lexically ordered after %s.\n", a, b);
    else
        printf("%s is not lexically ordered after %s.\n", a, b);
}

int main(int argc, char *argv[]) {
    // Case-sensitive comparisons.
    const char* a = (argc > 1) ? argv[1] : "1.2.Foo";
    const char* b = (argc > 2) ? argv[2] : "1.3.Bar";

    demo_compare(a, b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    int i, j;
    for(i=0; a[i]; i++)
        a[i] = tolower((unsigned char)a[i]);
    for(j=0; b[j]; j++)
        b[j] = tolower((unsigned char)b[j]);

    demo_compare(a, b, "lexically");

    // Numeric comparisons.
    double numA, numB;
    sscanf(a, "%lf", &numA);
    sscanf(b, "%lf", &numB);

    if(numA < numB)
        printf("%lf is numerically less than %lf.\n", numA, numB);
    else
        printf("%lf is not numerically less than %lf.\n", numA, numB);

    if(numA > numB)
        printf("%lf is numerically greater than %lf.\n", numA, numB);
    else
        printf("%lf is not numerically greater than %lf.\n", numA, numB);

    return strcmp(a,b)==0 ? 0 : 1;
}
```

Please note that in C, there's no built-in support for comparing strings with different types of data (like comparing a string with an integer). For such cases, we need to do explicit conversion using `sscanf` or similar functions. Also, note the use of `(unsigned char)` when calling `tolower`, this is because `tolower` is not locale-aware in C and expects its parameter to be of type unsigned char for correct operation on all possible characters.

This example also illustrates how C does not have a separate string data type like C++, instead, strings are represented as arrays of characters terminated by a null character.
