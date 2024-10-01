
// Python code:
"abcd".startswith("ab") #returns True
"abcd".endswith("zn") #returns False
"bb" in "abab" #returns False
"ab" in "abab" #returns True
loc = "abab".find("bb") #returns -1
loc = "abab".find("ab") #returns 0
loc = "abab".find("ab",loc+1) #returns 2

```c
#include <string.h>
int main() {
    char str1[] = "abcd";
    char str2[] = "ab";
    if (strncmp(str1, str2, strlen(str2)) == 0) {
        printf("The string %s starts with %s\n", str1, str2);
    } else {
        printf("The string %s does not start with %s\n", str1, str2);
    }

    if (strstr(str1, str2) != NULL) {
        printf("The string %s contains the substring %s at index %d\n", str1, str2, strstr(str1, str2) - str1);
    } else {
        printf("The string %s does not contain the substring %s\n", str1, str2);
    }

    if (strcmp(str1 + strlen(str1) - strlen(str2), str2) == 0) {
        printf("The string %s ends with %s\n", str1, str2);
    } else {
        printf("The string %s does not end with %s\n", str1, str2);
    }

    return 0;
}
```
Explanation:

In C, the functions for working with strings are implemented in the header file `<string.h>`. Here's a breakdown of how each line of the Python code is converted to C:

1. `strncmp(str1, str2, strlen(str2))` compares the first `strlen(str2)` characters of `str1` with `str2`. If they match, it returns 0, otherwise it returns a non-zero value. In C, we can use `strncmp()` to compare two strings for equality.
2. `strstr(str1, str2) != NULL` checks if the substring `str2` is present in `str1`. If it is, it returns a pointer to the first occurrence of `str2` in `str1`, otherwise it returns `NULL`. In C, we can use `strstr()` to search for a substring within a string.
3. `strcmp(str1 + strlen(str1) - strlen(str2), str2)` compares the last `strlen(str2)` characters of `str1` with `str2`. If they match, it returns 0, otherwise it returns a non-zero value. In C, we can use `strcmp()` to compare two strings for equality.

In the C code, we define an array of characters called `str1` and another array of characters called `str2`, which hold the strings "abcd" and "ab", respectively. We then use the `strncmp()`, `strstr()`, and `strcmp()` functions to compare the strings for equality, starting with the first string starting with the second string, followed by the first string containing the second string at any location, and finally checking if the first string ends with the second string. If a match is found, we print a message indicating that the string starts/contains/ends with the second string, respectively. Otherwise, we print a message indicating that the string does not start/contain/end with the second string.

Note that in C, we can use the `strlen()` function to get the length of a string, which is used in the comparison functions. We also use pointer arithmetic to calculate the location of the match for part 2.
