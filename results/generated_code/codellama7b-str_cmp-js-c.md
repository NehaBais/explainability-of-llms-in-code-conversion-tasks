
In C, strings are represented as arrays of characters. Comparing two strings can be done using the `strcmp` function, which returns an integer indicating whether the strings are equal, not equal, or if one is lexically ordered before or after the other. Here's an example of how to compare strings in C:
```c
#include <string.h>

int main() {
    char str1[] = "abcd";
    char str2[] = "abcd";
    char str3[] = "dcba";

    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    if (strcmp(str1, str3) < 0) {
        printf("String 1 is lexically ordered before string 2\n");
    } else {
        printf("String 1 is lexically ordered after or equal to string 2\n");
    }

    return 0;
}
```
In this example, we declare three arrays of characters `str1`, `str2`, and `str3`. We then compare the strings using the `strcmp` function. If the return value is 0, it means that the strings are equal. If the return value is less than 0, it means that string 1 is lexically ordered before string 2. If the return value is greater than 0, it means that string 1 is lexically ordered after or equal to string 2.

To compare two strings for exact equality, we can use the `strcmp` function with a third argument of 0. For example:

if (strcmp(str1, str2, 0) == 0) {
    printf("Strings are equal\n");
} else {
    printf("Strings are not equal\n");
}

To compare two strings for inequality, we can use the `strcmp` function with a third argument of -1. For example:

if (strcmp(str1, str2, -1) != 0) {
    printf("Strings are not equal\n");
} else {
    printf("Strings are equal\n");
}

To compare two strings to see if one is lexically ordered before the other, we can use the `strcmp` function with a third argument of -1. For example:

if (strcmp(str1, str2, -1) < 0) {
    printf("String 1 is lexically ordered before string 2\n");
} else {
    printf("String 1 is lexically ordered after or equal to string 2\n");
}

To compare two strings to see if one is lexically ordered after the other, we can use the `strcmp` function with a third argument of 1. For example:

if (strcmp(str1, str2, 1) > 0) {
    printf("String 1 is lexically ordered after string 2\n");
} else {
    printf("String 1 is lexically ordered before or equal to string 2\n");
}

To achieve both case sensitive and case insensitive comparisons within the language, we can use the `strcmp` function with a third argument of -1 or 1, depending on whether we want a case sensitive or case insensitive comparison. For example:

if (strcmp(str1, str2, -1) < 0) {
    printf("String 1 is lexically ordered before string 2\n");
} else {
    printf("String 1 is lexically ordered after or equal to string 2\n");
}

To compare two numeric strings, we can use the `strcmp` function with a third argument of -1 or 1, depending on whether we want to treat the strings as numbers or not. For example:

if (strcmp(str1, str2, -1) < 0) {
    printf("String 1 is less than string 2\n");
} else if (strcmp(str1, str2, 1) > 0) {
    printf("String 1 is greater than string 2\n");
} else {
    printf("String 1 is equal to string 2\n");
}

In C, the `strcmp` function also allows us to specify a maximum length for the strings being compared. This can be useful in situations where we only want to compare a subset of the characters in the strings. For example:

if (strcmp(str1, str2, 5) < 0) {
    printf("String 1 is less than string 2\n");
} else if (strcmp(str1, str2, 5) > 0) {
    printf("String 1 is greater than string 2\n");
} else {
    printf("String 1 is equal to string 2\n");
}

In this example, we compare the first five characters of `str1` and `str2`. If they are different, the function will return a value indicating which one is lexically ordered before or after the other. If they are the same, it returns 0.
